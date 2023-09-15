#ifndef DHT11_h
#define DHT11_h

#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


class dht11{
  public:
  void lec(void);
};


void dht11::lec(void){
  dht.begin();
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Ocurrio un error al leer la información del DHT11"));
    return;
  }

  Serial.print(F("Humedad: "));
  Serial.print(h);
  Serial.print(F("%"));
  Serial.print(F(" Temperatura: "));
  Serial.println(t);
}

#endif
