#include <SoftwareSerial.h>
SoftwareSerial Slave(2, 10);

char BluetoothData;


void setup() {
  Serial.begin(115200);
  Slave.begin(115200);

}

void loop() {
  if (Slave.available()) {
    BluetoothData = Slave.read();
    Serial.println(BluetoothData);
    if (BluetoothData == 'F') ;
  }
}
