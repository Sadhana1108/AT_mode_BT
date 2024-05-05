#include <SoftwareSerial.h>
int rx_pin = 4;
int tx_pin =2;
SoftwareSerial BTSerial(rx_pin, tx_pin);
String BT_data;
String Arduino_data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BTSerial.begin(9600);
//  Serial.print(AT+BIND?);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (BTSerial.available()){
    BT_data =  BTSerial.readString();
    Serial.println(BT_data);
  }
  if (Serial.available()){
    Arduino_data =  Serial.readString();
    BTSerial.println(Arduino_data);
  }

}
