.SUBCKT XNOR2_CMOS A B outputname gnd vdd
M0P outputname A^B Vdd Vdd pmos W=260.00n L=65.00n
M1N gnd A^B outputname gnd nmos W=260.00n L=65.00n
.ENDS XNOR2_CMOS 
