#ifndef LUZLM393_h
#define LUZLM393_h
#define pinLDR 4

class l_lm393{
  public:
  void lec(void);
};

void l_lm393::lec(void){
  int valorLDR = analogRead(pinLDR);  // Leer el valor analógico del LDR
  int Conversion_Valor_Iluminicidad = map(valorLDR,4095,0,0,100);
  Serial.print("Valor LDR: ");
  Serial.print(Conversion_Valor_Iluminicidad);  // Mostrar el valor en el monitor serial
  Serial.println("%");

  delay(1000);  // Esperar un segundo antes de realizar otra lectura
  
}


#endif