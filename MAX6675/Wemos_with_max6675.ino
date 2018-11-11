// Sample Wemos D1 with MAX6675  Sketch
// D1 Wiring 
//Pin   Function                        ESP-8266 Pin
//TX    TXD                             TXD
//RX    RXD                             RXD
//A0    Analog input, max 3.3V input    A0
//D0    IO                              GPIO16
//D1    IO, SCL                         GPIO5
//D2    IO, SDA                         GPIO4
//D3    IO, 10k Pull-up                 GPIO0
//D4    IO, 10k Pull-up, BUILTIN_LED    GPIO2
//D5    IO, SCK                         GPIO14
//D6    IO, MISO                        GPIO12
//D7    IO, MOSI                        GPIO13
//D8    IO, 10k Pull-down, SS           GPIO15
//G     Ground                          GND
//5V    5V                              -
//3V3   3.3V                            3.3V
//RST   Reset                           RST

#include "max6675.h"

int ktcSO = 12;
int ktcCS = 13;
int ktcCLK = 14;

MAX6675 ktc(ktcCLK, ktcCS, ktcSO);

  
void setup() {
  Serial.begin(9600);
  // give the MAX a little time to settle
  delay(500);
}

void loop() {
  // basic readout test
  
   Serial.print("Deg C = "); 
   Serial.print(ktc.readCelsius());
   Serial.print("\t Deg F = ");
   Serial.println(ktc.readFahrenheit());
 
   delay(1000);
}
