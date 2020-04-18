//*****************************************
//Bibliotecas, Macros y Variables globales*
//*****************************************

//Biblioteca del LCD
#include <LiquidCrystal.h>
const int rs = 12, e = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd( rs, e, d4, d5, d6, d7); //Inicia los pines digitales del LCD

//Pines digitales
const int led = 8;
const int buzzer = 9;
const int boton_pr = 6;
const int boton_fl = 7;
const int boton_reinicio = 13;




//Funciones prototipo
float coronometrartiempo();
void identificarletras();
void punto();
void raya();
void morse(char);
void frase_a_morse();


void setup() {
//Inicia el puerto serie
Serial.begin(9600);

//Inicia el LCD
lcd.begin(16,2);
lcd.clear(); 
lcd.setCursor(0,0);

//Inicia los pines digitales como entradas o salidas
pinMode(led, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(boton_pr,INPUT_PULLUP);  //Se utiliza la resistencia interna PULLUP para simplificar el circuito
pinMode(boton_fl, INPUT_PULLUP);
pinMode(boton_reinicio, INPUT_PULLUP);



}

void loop() {
  // put your main code here, to run repeatedly:

}

void cronometrartiempo(){
  
}

void identificarletras(){
  
}

void punto(){
  
}

void raya(){
  
}

void morse(char caracter){
  
}

void frase_a_morse(){
  
}
