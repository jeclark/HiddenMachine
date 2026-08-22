"""Business-card fronts following the user's birds.svg layout.
All coordinates in mm on a 19x11in sheet (482.6 x 279.4 viewBox).
Measured from birds.svg: pen-left 122.70; IN base 143.74 (label 1.36mm Regular,
inbound 1.98mm ExtraLight at pen 129.85); OUT base 149.50 (1.36mm); message
Light 4.36mm, lh 1.42em, L1 base 158.49, wrap 76.1mm, cursor +8/42em after text;
meta Regular 1.43mm base 188.40 with 45/11em gaps. 5-line messages shrink to
fit 4 lines (matches the template's big-text intent)."""
import textwrap, sys
import os
sys.path.insert(0,os.path.dirname(os.path.abspath(__file__)))
from lasersvg import text_paths, width_of

INK='#1a1d20'
PEN=122.70
CARD_RECT=('<rect style="vector-effect:non-scaling-stroke;fill:none;fill-opacity:0;'
 'stroke:#ff0000;stroke-width:0.323529;stroke-linecap:round;stroke-linejoin:round;'
 'stroke-miterlimit:5.1;-inkscape-stroke:hairline" id="rect1" '
 'width="86.106003" height="54.102001" x="117.73959" y="137.84793" />')

def card(msg, motif, inbound, pkt, snr, fname):
    e=[CARD_RECT, f'<g fill="{INK}">']
    # IN row
    p,_=text_paths('◂ IN','Regular',1.36,PEN,143.74,1.36*0.18); e+=p
    p,_=text_paths(inbound,'ExtraLight',1.98,129.85,143.74,1.98*0.033); e+=p
    # OUT row
    p,_=text_paths('▸ OUT • RESPONSE','Regular',1.36,PEN,149.50,1.36*0.18); e+=p
    # message: fit to <=4 lines
    F=4.36
    while True:
        adv=0.6*F+0.0048*F
        maxc=int(76.1//adv)
        lines=textwrap.wrap(msg,maxc)
        if len(lines)<=4: break
        F-=0.05
    lh=1.42*F
    base1=158.49
    last_w=0
    for i,ln in enumerate(lines):
        p,lw=text_paths(ln,'Light',F,PEN,base1+i*lh,0.0048*F); e+=p; last_w=lw
    lb=base1+(len(lines)-1)*lh
    e.append(f'<rect x="{PEN+last_w+8/42*F:.3f}" y="{lb-33/42*F:.3f}" width="{0.55*F:.3f}" height="{F:.3f}" fill="{INK}"/>')
    # meta row
    Fm=1.43; tr=0.145*Fm; gap=45/11*Fm; base=188.40; x=PEN
    p,w1=text_paths('MOTIF • ','Regular',Fm,x,base,tr); e+=p
    p,w2=text_paths(motif,'Medium',Fm,x+w1,base,tr); e+=p
    x+=w1+w2+gap
    p,w3=text_paths(pkt,'Regular',Fm,x,base,tr); e+=p
    x+=w3+gap
    p,w4=text_paths(f'SNR {snr} DB','Regular',Fm,x,base,tr); e+=p
    x+=w4+gap
    p,_=text_paths('DECODE 100%','Regular',Fm,x,base,tr); e+=p
    e.append('</g>')
    svg=('<?xml version="1.0" encoding="UTF-8" standalone="no"?>\n'
         '<svg width="19in" height="11in" viewBox="0 0 482.60001 279.4" version="1.1" '
         'xmlns="http://www.w3.org/2000/svg">\n<g id="layer1">\n'+'\n'.join(e)+'\n</g>\n</svg>\n')
    open(fname,'w',encoding='utf-8').write(svg)
    return fname,len(lines),round(F,2)
