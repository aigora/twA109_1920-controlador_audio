//*****************************************
//Bibliotecas, Macros y Variables globales*
//*****************************************

//Biblioteca del LCD
#include <LiquidCrystal.h>
const int rs = 12, e = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd( rs, e, d4, d5, d6, d7); //Inicia los pines digitales del LCD

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
String frase = "";                        //Vector que almacena la frase
int i = 0, j, k;                         //Variables de control en bucles

//Funciones prototipo
float coronometrartiempo();              //Mide el timpo que dura el pulsador en LOW
void identificarletras();                //Identifica la letra según los valores que  a almacenado el vectro letra[5]
void punto();                            //Enciende el LED y el buzzer durante el tiempo correspindiente al punto
void raya();                             //Enciende el LED y el buzzer durante el tiempo correspindiente a la raya
void morse(char);                        //Tiene dentro las funciones A(), B()...
void frase_a_morse();                    //Es la función dentro de void loop. El bucle for recorre el vector y llama a la función morse para cada caracter
void A(); void B(); void C(); void D(); void E(); void F(); void G(); void H(); void I(); void J(); void K(); void L(); void M(); void N();
void O(); void P(); void Q(); void R(); void S(); void T(); void U(); void V(); void W(); void X(); void Y(); void Z(); void espacio();

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
    case 'A': A(); break;
    case 'b':
    case 'B': B(); break;
    case 'c':
    case 'C': C(); break;
    case 'd':
    case 'D': D(); break;
    case 'e':
    case 'E': E(); break;
    case 'f':
    case 'F': F(); break;
    case 'g':
    case 'G': G(); break;
    case 'h':
    case 'H': H(); break;
    case 'i':
    case 'I': I(); break;
    case 'j':
    case 'J': J(); break;
    case 'k':
    case 'K': K(); break;
    case 'l':
    case 'L': L(); break;
    case 'm':
    case 'M': M(); break;
    case 'n':
    case 'N': N(); break;
    case 'o':
    case 'O': O(); break;
    case 'p':
    case 'P': P(); break;
    case 'q':
    case 'Q': Q(); break;
    case 'r':
    case 'R': R(); break;
    case 's':
    case 'S': S(); break;
    case 't':
    case 'T': T(); break;
    case 'u':
    case 'U': U(); break;
    case 'v':
    case 'V': V(); break;
    case 'w':
    case 'W': W(); break;
    case 'x':
    case 'X': X(); break;
    case 'y':
    case 'Y': Y(); break;
    case 'z':
    case 'Z': Z(); break;
    case ' ': espacio(); break;
    default: Serial.println("ERROR"); break;
  }
}

void frase_a_morse(){

  int longitud = 0;
  char caracter;
  
  if (Serial.available() > 0){
    frase = Serial.readString();
    longitud = frase.length();

    for (k=0; k<longitud; k++){
      caracter = frase.charAt(k);
      morse(carcater);
    }
  }
}

void A(){
  punto();
  raya();
}
void B(){
  raya();
  punto();
  punto();
  punto();
  punto();
}
void C(){
  raya();
  punto();
  raya();
  punto();
}
void D(){
  raya();
  punto();
  punto();
}
void E(){
  punto();
}
void F(){
  punto();
  punto();
  raya();
  punto();
}
void G(){
  raya();
  raya();
  punto();
}
void H(){
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
void L(){
  punto();
  raya();
  punto();
  punto();
}
void M(){
  raya();
  raya();
}
void N(){
  raya();
  punto();
}
void O(){
  raya();
  raya();
  raya();
}
void P(){
  punto();
  raya();
  raya();
  punto();
}
void Q(){
  raya();
  raya();
  punto();
  raya();
}
void R(){
  punto();
  raya();
  punto();
}
void S(){
  punto();
  punto();
  punto();
}
void T(){
  raya();
}
void U(){
  punto();
  punto();
  raya();
}
void V(){
  punto();
  punto();
  punto();
  raya();
}
void W(){
  punto();
  raya();
  raya();
}
void X(){
  raya();
  punto();
  punto();
  raya();
}
void Y(){
  raya();
  punto();
  raya();
  raya();
}
void Z(){
  raya();
  raya();
  punto();
  punto();
}
void espacio(){
  delay(2000);
}
