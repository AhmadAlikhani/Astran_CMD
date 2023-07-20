.SUBCKT INV_CMOS A outputname GND VCC
M0P outputname A VCC VCC pmos W=720.00n L=180.00n
M1N GND A outputname GND nmos W=720.00n L=180.00n
.ENDS INV_CMOS 
