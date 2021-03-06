#include <util/delay.h>
#include "Adafruit_BMP085.h"
#include <Wire.h>
Adafruit_BMP085 bmp;
void setup() {
  Serial.begin(9600);
  bmp.begin();
}

void loop() {
Serial.print("Temperature = ");
Serial.print(bmp.readTemperature());
Serial.println(" *C");
Serial.print("Pressure = ");
Serial.print(bmp.readPressure());
Serial.print(" Pa");
Serial.print("Altitude = ");
Serial.print(bmp.readAltitude(101253));
Serial.print(" Meters");
Serial.println();
delay(500);

}
