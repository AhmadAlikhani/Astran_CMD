.SUBCKT MODULENAME A B C D E F outputname
Mi0P wb_C C Vdd Vdd pmos W=1400n L=350n
Mi1N wb_C C gnd gnd nmos W=700n L=350n
Mi_MasterPMOS_P outputname gnd Vdd Vdd pmos W=700n L=350n
M0N outputname A w_3 gnd nmos W=3500n L=350n
M1N w_3 B w_2 gnd nmos W=3500n L=350n
M2N w_2 C w_1 gnd nmos W=3500n L=350n
M3N w_1 E w_0 gnd nmos W=3500n L=350n
M4N w_0 F gnd gnd nmos W=3500n L=350n
M5N outputname A w_4 gnd nmos W=1400n L=350n
M6N outputname B w_4 gnd nmos W=1400n L=350n
M7N outputname wb_C w_4 gnd nmos W=1400n L=350n
M8N w_4 D gnd gnd nmos W=1400n L=350n
.ENDS MODULENAME 