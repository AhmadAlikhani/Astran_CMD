.SUBCKT O22AI A1 A2 B1 B2 outputname GND VCC
M0P w_0 A1 VCC VCC pmos L=65n W=800n
M1P outputname A2 w_0 VCC pmos L=65n W=800n
M2P w_1 B1 VCC VCC pmos L=65n W=800n
M3P outputname B2 w_1 VCC pmos L=65n W=800n
M4N GND A1 w_2 GND nmos L=65n W=480n
M5N GND A2 w_2 GND nmos L=65n W=480n
M6N w_2 B1 outputname GND nmos L=65n W=480n
M7N w_2 B2 outputname GND nmos L=65n W=480n
.ENDS O22AI 
