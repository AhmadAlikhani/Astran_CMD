.SUBCKT O21BAI_PSEUDONMOS A1 A2 B1_N outputname gnd VCC
Mi0P wb_B1_N B1_N VCC VCC pmos W=260.00n L=65.00n
Mi1N wb_B1_N B1_N gnd gnd nmos W=130.00n L=65.00n
Mi_MasterPMOS_P outputname gnd VCC VCC pmos W=130.00n L=65.00n
M0N outputname A1 w_0 gnd nmos W=260.00n L=65.00n
M1N outputname A2 w_0 gnd nmos W=260.00n L=65.00n
M2N w_0 wb_B1_N gnd gnd nmos W=260.00n L=65.00n
.ENDS O21BAI_PSEUDONMOS 
