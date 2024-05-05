# AT_mode_BT
Connect arduino UNO and Bluetooth module HC-05.<br>
To set bluetooth module into AT mode, hold on button on hc-05 while giving power supply
vcc to 5v<br>
gnd to gnd<br>
tx to 4<br>
rx to 2<br>
Some AT commands: <br>
AT+NAME? to find name of hc-05 <br>
AT+ROLE? to know whether it is in master/slave mode<br>
AT+ROLE=0 sets bluetooth module to slave mode<br>
AT+ROLE=1 sets bluetooth module to Master mode<br>
AT+UART=9600 sets baud rate<br>
Usually password for bluetooth modules are set to be 1234
