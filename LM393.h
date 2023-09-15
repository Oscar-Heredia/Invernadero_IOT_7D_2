#ifndef LM393_h
#define LM393_h


class lm393{
  public:
  void lec(void);
};

void lm393::lec(void){
  delay(1000);
  int Valor_Humedad_Suelo = analogRead(4);
  int Conversion_Valor_Humedad_Suelo = map(Valor_Humedad_Suelo,4095,0,0,100);
  Serial.print("La humedad es: ");
  Serial.println(Conversion_Valor_Humedad_Suelo);
  
}


#endif