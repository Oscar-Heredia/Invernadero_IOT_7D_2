#include "Actuadores.h"
actuadores ACT;
#include "MicroSD.h"
MicroSD MSD;
#include "DHT11.h"
dht11 dt;
#include "LM393.h"
lm393 lm;
#include "LUZLM393.h"
l_lm393 llm;
#include "RTC.h"     /* Librería para controlar el RTC */
DS1307_RTC RTC;
#include "Tasks.h"   /* Librería propia para controlar las tareas. */
millis_tasks tsk;



void setup(void)
{
   Serial.begin(9600); 
   RTC.RTC_init ( );  
}

void loop(void)
{
  //dt.lec();
  //lm.lec();
  //llm.lec();

  delay(2000);
  //RTC.get_time ( );               /* Actualizar fecha y hora en formato RAW */
  //RTC.show_time ( );
  //tsk.actualizar_tareas ( );
  
  tsk.actualizar_tareas ( );
  tsk.tarea_rtc ( );              /* Dar formato y mostrar por consola serial */


  //tsk.tarea1 ( );
  //tsk.tarea2 ( );
  //tsk.tarea3 ( );


}


/*
// Incluye la biblioteca para controlar el ESP32
#include <Arduino.h>

// Define el pin al que está conectado el relé
#define RELAY_PIN 4

void setup() {
  // Inicializa el pin del relé como salida
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  // Enciende el relé durante 1 segundo
  digitalWrite(RELAY_PIN, HIGH);
  delay(1000);
  // Apaga el relé durante 1 segundo
  digitalWrite(RELAY_PIN, LOW);
  delay(1000);
}
*/

/*
#include "RTC.h"

  DS1307_RTC RTC;

void setup ( void ) {
  
  Serial.begin ( 115200 );        /* Inicializar baudrate a 115200 */
  //  RTC.RTC_init ( );             /* Inicializar configuración del reloj */

 // Serial.println ( F ( "El DS-1307 ha sido configurado exitosamente." ) );

//}

//void loop ( void ) {

  //RTC.get_time ( );               /* Actualizar fecha y hora en formato RAW */
  //RTC.show_time ( );              /* Dar formato y mostrar por consola serial */
  
//  delay ( 1000 ); 

//}


/*

#include "MicroSD.h"
MicroSD MSD;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  MSD.MicroSD_init( );
  
  //Serial.println("Hello, ESP32!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay ( 2000 ); // this speeds up the simulation
  Serial.println("Guardando en MicroSD...");
  MSD.SaveFile ( );
  delay ( 500 );
  Serial.println("Leyendo MicroSD...");
  MSD.ReadFile ( );
}
*/



























