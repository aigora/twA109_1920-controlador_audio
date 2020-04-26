# Decodificador/Codificador de código morse

## Descripción breve del proyecto a realizar (2-3 frases).

Dispositivo capaz de monitorizar el timepo que este está pulsado un pulsador e idenftifique las pulsaciones como rayas o puntos y muestre en un LCD el mensaje decodoficado. Por otra parte cuando se introduzca una frase desde un ordenador el dispositivo lo traducirá a codigo morse y lo emitirá a través de un LED y un Buzzer.
Para alternar entre ambos modos se introduce un potenciómetro, basta con girarlo para cambiar de modo.

## Integrantes del equipo

Rafael Rodríguez Palomo @rafaelrodriguezp

## Objetivos del trabajo

-Progamar el dispositivo de una forma robusta.
-Enviar datos recogidos del entorno al PC y que este los analice y monitorice.
-Tener una herramienta fácil de usar para decodificar morse.
-Desarrollar una interfaz en la pantalla LCD fácil de interpretar para el usuario.

## Relación de hardware (Sensores y actuadores)

PC, placa Arduino o compatible, LED, buzzer, pulsadores, pantalla LCD, potenciómetro.

## Software

Lenguaje C/C++, IDE de Arduino o DevC++ para desarrollar el programa.

## Esquema de conexión del circuito
![Esquema de Conexión](https://github.com/aigora/twA109_1920-controlador_audio/blob/master/Esquema.jpg)

## Identificación de subprogramas

- **float** coronometrartiempo();              //Mide el timpo que dura el pulsador en LOW

- **void** identificarletras();                //Identifica la letra según los valores que a almacenado el vector letra[5]

- **void** punto();                            //Enciende el LED y el buzzer durante el tiempo correspindiente al punto

- **void** raya();                             //Enciende el LED y el buzzer durante el tiempo correspindiente a la raya

- **void** morse(char);                        //Tiene dentro las funciones A(), B()...

- **void** frase_a_morse();                    //Es la función dentro de void loop. El bucle for recorre el vector y llama a la función morse para cada caracter

- **void** A(); **void** B(); **void** C(); **void** D(); **void** E(); **void** F(); **void** G();   //Las funciones A(), B()... incluyen las funciones punto()
- **void** H(); **void** I(); **void** J(); **void** K(); **void** L(); **void** M(); **void** N();   //y raya() con el código de cada una
- **void** O(); **void** P(); **void** Q(); **void** R(); **void** S(); **void** T(); **void** U();
- **void** V(); **void** W(); **void** X(); **void** Y(); **void** Z(); **void** espacio();

## Código

![Codigo] (https://github.com/aigora/twA109_1920-controlador_audio/blob/master/codigo_funcional/codigo_funcional.ino)






















