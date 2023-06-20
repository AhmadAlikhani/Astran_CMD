.SUBCKT O21BAI_CMOS A1 A2 B1_N outputname gnd vdd
Mi0P wb_B1_N B1_N Vdd Vdd pmos W=260.00n L=65.00n
Mi1N wb_B1_N B1_N gnd gnd nmos W=130.00n L=65.00n
M0P w_0 A1 Vdd Vdd pmos W=520.00n L=65.00n
M1P outputname A2 w_0 Vdd pmos W=520.00n L=65.00n
M2P outputname wb_B1_N Vdd Vdd pmos W=260.00n L=65.00n
M3N gnd A1 w_1 gnd nmos W=520.00n L=65.00n
M4N gnd A2 w_1 gnd nmos W=520.00n L=65.00n
M5N w_1 wb_B1_N outputname gnd nmos W=520.00n L=65.00n
.ENDS O21BAI_CMOS 
