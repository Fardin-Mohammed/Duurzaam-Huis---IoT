            // DHT11
  #include "DHT.h"
  #define DHTTYPE DHT11
  uint8_t DHTPin = D7;
DHT dht(DHTPin, DHTTYPE);

float Temparature, Humidity, HeatIndex;

  
  void setup() {

}

void loop() {
  ReadDHT11();
  // wait before reading DHT11 again...
  delay(6000);
}
