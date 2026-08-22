"""Generate a white-background, dark-mark, all-paths HIDDENMACHINE panel for laser engraving."""
import math, random, textwrap, sys, re
from fontTools.ttLib import TTFont
from fontTools.pens.svgPathPen import SVGPathPen

import os
SCRATCH=os.path.join(os.path.dirname(os.path.abspath(__file__)),'fonts')
FONTS={w:TTFont(f'{SCRATCH}/IBMPlexMono-{w}.ttf') for w in ('ExtraLight','Light','Regular','Medium')}

def text_paths(s, weight, size, x, y, tracking=0.0):
    """Return SVG path elements for string s at font size, baseline y, with letter-spacing tracking(px)."""
    f=FONTS[weight]; upm=f['head'].unitsPerEm; scale=size/upm
    cmap=f.getBestCmap(); glyphs=f.getGlyphSet(); hmtx=f['hmtx']
    out=[]; cx=x
    for ch in s:
        if ch==' ' or ch==' ':  # thin/hair space
            cx+=size*0.2; continue
        if ch=='\u0394':  # delta: font lacks it; draw a triangle
            mono_adv=hmtx[cmap[ord('M')]][0]*scale
            wd=mono_adv*0.72; ht=size*0.62; bx=cx+(mono_adv-wd)/2
            out.append(f'<path d="M{bx+wd/2:.2f},{y-ht:.2f} L{bx+wd:.2f},{y:.2f} L{bx:.2f},{y:.2f} Z" fill="none" stroke="#1a1d20" stroke-width="{max(1.0,size*0.09):.2f}"/>')
            cx+=mono_adv+tracking; continue
        if ch in '\u25c2\u25b8':  # side triangles: font lacks them
            mono_adv=hmtx[cmap[ord('M')]][0]*scale
            ht=size*0.5; wd=ht*0.75; my=y-size*0.30
            if ch=='\u25b8': pts=f'{cx:.2f},{my-ht/2:.2f} {cx+wd:.2f},{my:.2f} {cx:.2f},{my+ht/2:.2f}'
            else: pts=f'{cx+wd:.2f},{my-ht/2:.2f} {cx:.2f},{my:.2f} {cx+wd:.2f},{my+ht/2:.2f}'
            out.append(f'<polygon points="{pts}"/>')
            cx+=mono_adv+tracking; continue
        gname=cmap.get(ord(ch))
        if gname is None: gname=cmap.get(ord('?'))
        adv=hmtx[gname][0]*scale
        if ch!=' ':
            pen=SVGPathPen(glyphs); glyphs[gname].draw(pen)
            d=pen.getCommands()
            if d:
                out.append(f'<path transform="translate({cx:.2f},{y:.2f}) scale({scale:.6f},{-scale:.6f})" d="{d}"/>')
        cx+=adv+tracking
    return out, cx-x

def width_of(s, weight, size, tracking=0.0):
    f=FONTS[weight]; upm=f['head'].unitsPerEm; scale=size/upm
    cmap=f.getBestCmap(); hmtx=f['hmtx']
    w=0
    for ch in s:
        gname=cmap.get(ord(ch)) or cmap.get(ord('?'))
        w+=hmtx[gname][0]*scale+tracking
    return w

INK='#1a1d20'   # near-black, single power
W,H=1600,900

def panel(msg, motif, inbound, fname, seed=4625, utc='04:12:16 UTC', pkt='PKT 7F3A', snr='11.4', logged='4 662 817 203'):
    e=[]
    e.append(f'<rect width="{W}" height="{H}" fill="#ffffff"/>')
    e.append(f'<g fill="{INK}">')
    # ---- header ----
    e.append(f'<circle cx="64" cy="46" r="4"/>')
    p,_=text_paths('HIDDENMACHINE','Medium',11,79,50,4); e+=p
    p,_=text_paths('// STATION HMΔ','Regular',11,253,50,2); e+=p
    w=width_of('FREQ 4.625 MHZ','Regular',11,1.5)
    p,_=text_paths('FREQ 4.625 MHZ','Regular',11,1150,50,1.5); e+=p
    p,_=text_paths(utc,'Regular',11,1301,50,1.5); e+=p
    e.append(f'<rect x="1436" y="34" width="104" height="25" rx="2" fill="none" stroke="{INK}" stroke-width="1.4"/>')
    e.append(f'<circle cx="1450" cy="46.5" r="3"/>')
    p,_=text_paths('AUDIO ON','Regular',11,1460,50,1.5); e+=p
    e.append(f'<rect x="60" y="60.5" width="1480" height="1.4"/>')
    # ---- middle column ----
    # wrap message at 42px in 860px, mono char advance
    ch_w=width_of('M','Light',42,0.2)
    maxc=int(860//ch_w)
    lines=textwrap.wrap(msg,maxc)
    lh=42*1.42
    msg_h=len(lines)*lh
    gap=30.6
    total=15+gap+11+14+msg_h+gap+11
    mid_c=(61+737)/2
    y0=mid_c-total/2
    # IN row
    yin=y0+12
    p,_=text_paths('◂ IN','Regular',11,370,yin,2); e+=p
    p,_=text_paths(inbound,'ExtraLight',15,424,yin,0.5); e+=p
    # OUT label
    yout=y0+15+gap+11
    p,_=text_paths('▸ OUT • RESPONSE','Regular',11,370,yout,2); e+=p
    # message lines
    ym=yout+14+42*0.95
    last_w=0
    for i,ln in enumerate(lines):
        p,lw=text_paths(ln,'Light',42,370,ym+i*lh,0.2); e+=p; last_w=lw
    # cursor after last line
    cy=ym+(len(lines)-1)*lh
    e.append(f'<rect x="{370+last_w+8:.1f}" y="{cy-33:.1f}" width="23.1" height="42"/>')
    # meta row
    ymeta=yout+14+msg_h+gap+4
    x=370
    p,w1=text_paths('MOTIF • ','Regular',11,x,ymeta,1.6); e+=p
    p,w2=text_paths(motif,'Medium',11,x+w1,ymeta,1.6); e+=p
    x2=x+w1+w2+45
    p,w3=text_paths(pkt,'Regular',11,x2,ymeta,1.6); e+=p
    x3=x2+w3+45
    p,w4=text_paths(f'SNR {snr} DB','Regular',11,x3,ymeta,1.6); e+=p
    x4=x3+w4+45
    p,_=text_paths('DECODE 100%','Regular',11,x4,ymeta,1.6); e+=p
    # ---- signal block ----
    p,_=text_paths('// SIGNAL','Regular',10,60,751,2); e+=p
    w=width_of('WAVEFORM — LIVE','Regular',10,2)
    p,_=text_paths('WAVEFORM — LIVE','Regular',10,1540-w,751,2); e+=p
    # waveform
    random.seed(seed)
    h=66; mid=h/2; t=4.2; r=0.5
    amp=h*(0.05+0.07*r); nz=h*(0.006+0.02*r)
    pts=[]
    for xx in range(0,1481,2):
        ph=xx/1480*math.pi*2
        yv=mid+math.sin(ph*3+t*1.9)*amp*0.5+math.sin(ph*7-t*1.3)*amp*0.26+(random.random()*2-1)*nz
        pts.append(f'{xx},{yv:.2f}')
    e.append(f'<g transform="translate(60,765)"><line x1="0" y1="33" x2="1480" y2="33" stroke="{INK}" stroke-width="1" stroke-dasharray="2 5"/>'
             f'<polyline points="{" ".join(pts)}" fill="none" stroke="{INK}" stroke-width="1.6"/></g>')
    e.append(f'<rect x="60" y="839.5" width="1480" height="1.4"/>')
    # ---- footer ----
    for bx,by,bh in ((60,857.5,6.5),(64.5,853,11),(69,851,13),(73.5,855,9),(78,860,4)):
        e.append(f'<rect x="{bx}" y="{by}" width="2.5" height="{bh}"/>')
    p,_=text_paths('SIGNAL LOCK','Regular',10.5,92,862,1.6); e+=p
    mids=f'TRANSMISSIONS LOGGED {logged}'
    w=width_of(mids,'Regular',10.5,1.6)
    p,_=text_paths(mids,'Regular',10.5,800-w/2,862,1.6); e+=p
    tail='CLICK / SPACE — ADVANCE'
    w=width_of(tail,'Regular',10.5,1.6)
    p,_=text_paths(tail,'Regular',10.5,1540-w,862,1.6); e+=p
    e.append('</g>')
    svg=(f'<svg xmlns="http://www.w3.org/2000/svg" width="{W}" height="{H}" viewBox="0 0 {W} {H}">\n'
         f'<title>HIDDENMACHINE — {motif}</title>\n'+'\n'.join(e)+'\n</svg>\n')
    open(fname,'w',encoding='utf-8').write(svg)
    return fname,len(lines)

if __name__=='__main__':
    f,n=panel('No — the other one. The blue one. You know the one.','THE-BLUE-ONE','no, ▓▓▓ ▓▓▓▓ one', SCRATCH+'/laser-proof.svg')
    print('wrote',f,'msg lines',n)
