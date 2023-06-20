.SUBCKT O21BAI_CVSL A1 A2 B1_N outputname outputname_B gnd vdd
Mi0P wb_A1 A1 Vdd Vdd pmos W=260.00n L=65.00n
Mi1N wb_A1 A1 gnd gnd nmos W=130.00n L=65.00n
Mi2P wb_A2 A2 Vdd Vdd pmos W=260.00n L=65.00n
Mi3N wb_A2 A2 gnd gnd nmos W=130.00n L=65.00n
Mi4P wb_B1_N B1_N Vdd Vdd pmos W=260.00n L=65.00n
Mi5N wb_B1_N B1_N gnd gnd nmos W=130.00n L=65.00n
Mi_MasterPMOS_P1 outputname outputname_B Vdd Vdd pmos W=130.00n L=65.00n
Mi_MasterPMOS_P2 outputname_B outputname Vdd Vdd pmos W=130.00n L=65.00n
M0N outputname_B wb_A1 w_0 gnd nmos W=260.00n L=65.00n
M1N w_0 wb_A2 gnd gnd nmos W=260.00n L=65.00n
M2N outputname_B B1_N gnd gnd nmos W=130.00n L=65.00n
M3N outputname A1 w_1 gnd nmos W=260.00n L=65.00n
M4N outputname A2 w_1 gnd nmos W=260.00n L=65.00n
M5N w_1 wb_B1_N gnd gnd nmos W=260.00n L=65.00n
.ENDS O21BAI_CVSL 
