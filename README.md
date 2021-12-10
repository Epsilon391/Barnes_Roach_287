# Barnes_Roach_287
The goal of this project is to use a PS2 keyboard to control a servo wired to an Arduino. 
This is done by using an FPGA to read the PS2 input. Then, the FPGA encodes it and sends it to the Arduino.

The zipped file contains all quartus files that the project generated.
The Arduino_SPI file contains the code for reading the encoded input from the FPGA and translating that to values for the servo.

287 Project proposal
Gant Char 287 Project

In order to use the PS2 keyboard you must press enter after you enter each digit. You can send digits 0-9 using the alphanumeric number keys. 
There is an option to send a negative sign, however the servo does not need it so it is ignored.
