// Wire Master Reader
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Reads data from an I2C/TWI slave device
// Refer to the "Wire Slave Sender" example for use with this

// Created 29 March 2006

// This example code is in the public domain.
/**
 * INCLUIR A Biblioteca Wire
 */
#include "Wire.h"
#define ADDRESS 8
void setup() {
  //Inicia o I2C e atribui o Endereço 
  Wire.begin(ADDRESS);
  //Especificação do Handler de pedidos
  Wire.onRequest(sendData);
}

void loop() {
  //Protege de overhead
  delay(100);
}

void sendData(){
  //Escreve 3 bytes e envia
  Wire.write("IOT");
}
