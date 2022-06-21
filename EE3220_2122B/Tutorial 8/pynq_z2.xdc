# PYNQ Pin Assignments

## Switches

set_property -dict { PACKAGE_PIN M20   IOSTANDARD LVCMOS33 } [get_ports { GPIO_0_tri_i[0] }]; #IO_L7N_T1_AD2N_35 Sch=sw[0]
set_property -dict { PACKAGE_PIN M19   IOSTANDARD LVCMOS33 } [get_ports { GPIO_0_tri_i[1] }]; #IO_L7P_T1_AD2P_35 Sch=sw[1]

## On-board leds

set_property -dict { PACKAGE_PIN R14   IOSTANDARD LVCMOS33 } [get_ports { GPIO_1_tri_o[0] }];
set_property -dict { PACKAGE_PIN P14   IOSTANDARD LVCMOS33 } [get_ports { GPIO_1_tri_o[1] }];
set_property -dict { PACKAGE_PIN N16   IOSTANDARD LVCMOS33 } [get_ports { GPIO_1_tri_o[2] }];
set_property -dict { PACKAGE_PIN M14   IOSTANDARD LVCMOS33 } [get_ports { GPIO_1_tri_o[3] }];