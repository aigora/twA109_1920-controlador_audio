//*****************************************
//Bibliotecas, Macros y Variables globales*
//*****************************************

//Biblioteca del LCD
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd( rs, en, d4, d5, d6, d7); //Inicia los pines digitales del LCD

//Macros
#define LONG 500

//Pines digitales
const int led = 8;
const int buzzer = 9;
const int boton_pr = 6;
const int boton_fl = 7;
const int boton_reinicio = 13;

//Variables globales
int valor_morse = 0;                     //Almacena el valor del pulsador que sirve para introducir puntos o rayas 
int valor_finletra = 0;                  //Almacena el valor del pulsador que sirve para indicar que se ha introducido una letra
char letra[5] = {'n','n','n','n','n'};   //Se inicia un vector con todos los elemnetos 'n' para indicar que esos elementos no son ni puntos ni rayas. No todas las letras tienen 5 elementos.
char *frase;                             //Vector que almacena la frase
int i = 0, j, k;                         //Variables de control en bucles

//Funciones prototipo
float coronometrartiempo();              //Mide el timpo que dura el pulsador en LOW
void identificarletras();                //Identifica la letra según los valores que  a almacenado el vectro letra[5]
void punto();                            //Enciende el LED y el buzzer durante el tiempo correspindiente al punto
void raya();                             //Enciende el LED y el buzzer durante el tiempo correspindiente a la raya
void morse(char);                        //Tiene dentro las funciones A(), B()...
void frase_a_morse();                    //Es la función dentro de void loop. El bucle for recorre el vector y llama a la función morse para cada caracter
void a(); void b(); void c(); void d(); void E(); void f(); void g(); void h(); void I(); void J(); void K(); void l(); void m(); void n();
void o(); void p(); void q(); void r(); void s(); void t(); void u(); void v(); void w(); void x(); void y(); void z(); void espacio();

//******************
//Funcion Principal*
//******************

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

}

//**********************
//Funciones Secundarias*
//**********************

void cronometrartiempo(){
  
}

void identificarletras(){
  
}

void punto(){
  digitalWrite(led, HIGH);
  tone(buzzer, 2300);
  delay(300);
  digitalWrite(led, LOW);
  noTone(buzzer);
  delay(200);
}

void raya(){
  digitalWrite(led, HIGH);
  tone(buzzer, 2300);
  delay(800);
  digitalWrite(led, LOW);
  noTone(buzzer);
  delay(200);
}

void morse(char caracter){
  switch (caracter){
    case 'a':
    case 'A': a(); break;
    case 'b':
    case 'B': b(); break;
    case 'c':
    case 'C': c(); break;
    case 'd':
    case 'D': d(); break;
    case 'e':
    case 'E': E(); break;
    case 'f':
    case 'F': f(); break;
    case 'g':
    case 'G': g(); break;
    case 'h':
    case 'H': h(); break;
    case 'i':
    case 'I': I(); break;
    case 'j':
    case 'J': J(); break;
    case 'k':
    case 'K': K(); break;
    case 'l':
    case 'L': l(); break;
    case 'm':
    case 'M': m(); break;
    case 'n':
    case 'N': n(); break;
    case 'o':
    case 'O': o(); break;
    case 'p':
    case 'P': p(); break;
    case 'q':
    case 'Q': q(); break;
    case 'r':
    case 'R': r(); break;
    case 's':
    case 'S': s(); break;
    case 't':
    case 'T': t(); break;
    case 'u':
    case 'U': u(); break;
    case 'v':
    case 'V': v(); break;
    case 'w':
    case 'W': w(); break;
    case 'x':
    case 'X': x(); break;
    case 'y':
    case 'Y': y(); break;
    case 'z':
    case 'Z': z(); break;
    case ' ': espacio(); break;
    default: Serial.println("ERROR"); break;
  }
}

void frase_a_morse(){

  char caracter;
  
  if (Serial.available() > 0){
    *frase = Serial.read();

    for (k=0; frase[k]!='\0' ; k++){
      caracter = frase[k];
      morse(caracter);
    }
  }
}

void a(){
  punto();
  raya();
}
void b(){
  raya();
  punto();
  punto();
  punto();
  punto();
}
void c(){
  raya();
  punto();
  raya();
  punto();
}
void d(){
  raya();
  punto();
  punto();
}
void E(){
  punto();
}
void f(){
  punto();
  punto();
  raya();
  punto();
}
void g(){
  raya();
  raya();
  punto();
}
void h(){
  punto();
  punto();
  punto();
  punto();
}
void I(){
  punto();
  punto();
}
void J(){
  punto();
  raya();
  raya();
  raya();
}
void K(){
  raya();
  punto();
  raya();
}
void l(){
  punto();
  raya();
  punto();
  punto();
}
void m(){
  raya();
  raya();
}
void n(){
  raya();
  punto();
}
void o(){
  raya();
  raya();
  raya();
}
void p(){
  punto();
  raya();
  raya();
  punto();
}
void q(){
  raya();
  raya();
  punto();
  raya();
}
void r(){
  punto();
  raya();
  punto();
}
void s(){
  punto();
  punto();
  punto();
}
void t(){
  raya();
}
void u(){
  punto();
  punto();
  raya();
}
void v(){
  punto();
  punto();
  punto();
  raya();
}
void w(){
  punto();
  raya();
  raya();
}
void x(){
  raya();
  punto();
  punto();
  raya();
}
void y(){
  raya();
  punto();
  raya();
  raya();
}
void z(){
  raya();
  raya();
  punto();
  punto();
}
void espacio(){
  delay(2000);
}
