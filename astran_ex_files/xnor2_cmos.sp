.SUBCKT XNOR2_CMOS A B outputname GND VCC
M0P outputname A^B VCC VCC pmos W=260.00n L=65.00n
M1N GND A^B outputname GND nmos W=260.00n L=65.00n
.ENDS XNOR2_CMOS 
