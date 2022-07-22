#include <SoftwareSerial.h> //incluindo a biblioteca de comunicação

SoftwareSerial mySerial(0, 1); // 0-RX, 1-TX //Pinos de comunicação bluetooth

int rele1 = 11; // Define a porta Digital 9 como rele1.
int rele2 = 10; // Define a porta Digital 8 como rele2.

void setup() {
mySerial.begin(9600); // Define a comunicação serial em 9600.
pinMode(rele1, OUTPUT); // rele1 como um pino de saida.
pinMode(rele2, OUTPUT); // rele2 como um pino de saida.
}

void loop() {
char caracter = mySerial.read(); // Faz a leitura dos caracteres

if (caracter == 'A') { // É identificada como caractere 'A'.
digitalWrite(rele1, HIGH); // Liga rele1.
}
if (caracter == 'a') { // É identificada como caractere 'a'.
digitalWrite(rele1, LOW); // Desliga rele1.
}
if (caracter == 'B') { // É identificada como caractere 'B'.
digitalWrite(rele2, HIGH); // Liga rele2.
}
if (caracter == 'b') { // É identificada como caractere 'b'.
digitalWrite(rele2, LOW); // Desliga rele2.
}
}