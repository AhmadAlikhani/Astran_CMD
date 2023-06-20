.SUBCKT XNOR2_CVSL A B outputname outputname_B gnd vdd
Mi0P wb_A^B A^B Vdd Vdd pmos W=260.00n L=65.00n
Mi1N wb_A^B A^B gnd gnd nmos W=130.00n L=65.00n
Mi_MasterPMOS_P1 outputname outputname_B Vdd Vdd pmos W=130.00n L=65.00n
Mi_MasterPMOS_P2 outputname_B outputname Vdd Vdd pmos W=130.00n L=65.00n
M0N outputname_B wb_A^B gnd gnd nmos W=130.00n L=65.00n
M1N outputname A^B gnd gnd nmos W=130.00n L=65.00n
.ENDS XNOR2_CVSL 
