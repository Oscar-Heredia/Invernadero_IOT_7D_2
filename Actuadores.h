#ifndef Actuadores_h
#define Actuadores_h
#define seleccion(a) a ? 0:1
#include <Wire.h>               /*~ Librería I2C ~*/
#include <LiquidCrystal_I2C.h>  /*~ Librería LCD ~*/

LiquidCrystal_I2C lcd ( 0x27, 16, 2 );  /*~ Instancia de la clase para el manejo de la pantalla ( Dirección I2C, columnas, filas ) ~*/

class actuadores {

  public:

  public:
  void lcdInit (void);
  void printfilan ( String,bool );
};

void actuadores :: lcdInit (void){

   lcd.init ( ); 					 	/*~ Inicializar la pantalla LCD ~*/
   lcd.backlight ();

}

void actuadores :: printfilan (String msg, bool option){

    
    lcd.setCursor ( 0, option );   	/*~ ( columnas, filas) Ubicamos el cursor en la primera posición(columna:0) de la primera línea(fila:0) ~*/
    lcd.print ( msg ); /*~ Mostrar una cadena de texto (no exceder 16 caracteres por línea)~*/
    delay ( 1000 );				/*~ Esperar 1 segundo ~*/  
 		

}



#endif
