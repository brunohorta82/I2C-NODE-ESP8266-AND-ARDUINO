/*
  I2C Arduino SLAVE
  Envia 3 bytes sempre que o Master pede.
  criado a 28 Abril 2016
  por Bruno Horta
 */
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
