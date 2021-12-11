# Barnes_Roach_287

IMPORTANT: In order for the FPGA to read keyboard inputs, the read, chipselect, and byteen[0] switches must be on (SW1, SW3, SW13 respectively). Also, SW17 resets the FSM and KEY0 (the right most push button) resets the PS/2 keyboard SPI.

The goal of this project is to use a PS2 keyboard to control a servo wired to an Arduino. 
This is done by using an FPGA to read the PS2 input. Then, the FPGA encodes it and sends it to the Arduino.
The 287 Project proposal file contains a gantt chart and a list of some of our goals for the project.

The Arduino_SPI file contains the code for reading the encoded input from the FPGA and translating it to values for the servo.

The zipped file contains all quartus files that the project generated.
In order to operate the PS2 keyboard you must press enter after you input each digit. When it comes to funtional keys, the negative sign, 0-9, enter signals must be sent using the alphanumeric portion of the keyboard. The negative signal can be sent to the Arduino, but it currently has no functionallity since the servo goes from 0 to 180.
