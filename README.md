# Barnes_Roach_287

IMPORTANT: In order for the FPGA to read keyboard inputs, the read, chipselect, and byteen[0] switches must be on (SW1, SW3, SW13 respectively). Also, SW17 acts as a reset.

The goal of this project is to use a PS2 keyboard to control a servo wired to an Arduino. 
This is done by using an FPGA to read the PS2 input. Then, the FPGA encodes it and sends it to the Arduino.
The 287 Project proposal contains a gantt chart and a list of some of our goals for the project.

The Arduino_SPI file contains the code for reading the encoded input from the FPGA and translating that to values for the servo.

The zipped file contains all quartus files that the project generated.
In order to use the PS2 keyboard you must press enter after you enter each digit. You can send digits 0-9 using the alphanumeric number keys. 
There is an option to send a negative sign, however the servo does not need it so it is ignored.
