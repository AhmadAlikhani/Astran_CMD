.SUBCKT INV_CMOS A outputname gnd vdd
M0P outputname A Vdd Vdd pmos W=260.00n L=65.00n
M1N gnd A outputname gnd nmos W=260.00n L=65.00n
.ENDS INV_CMOS 
