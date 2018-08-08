#include <SoftwareSerial.h>

SoftwareSerial bt(2,3); //TX,RX respectivamente

void setup() {
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  bt.begin(38400);
}

void loop() {
  if(bt.available()){ // Lee bluetooth y envia a arduino
    Serial.write(bt.read());  
  }

  if(Serial.available()){ // Lee arduino y envia a bluetooth
    bt.write(Serial.read());
  }

}
