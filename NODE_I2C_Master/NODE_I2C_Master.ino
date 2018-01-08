/*
  I2C MODE MCU Master
  Pede 3 bytes ao Slave e imprime na consola.
  criado a 28 Abril 2016
  por Bruno Horta
 */
/**
 * INCLUIR A Biblioteca Wire
 */
#include <Wire.h>

#define WIRE_SDA 4
#define WIRE_SCL 5
#define SLAVE_ONE 8

void setup() {
  /*Inicia o I2C, a Biblioteca Wire para ESP, 
   * não permite Slave por isso apenas deixa especificar 
   * os pinos SDA e SCL.
   * Caso não seja especificado nada fica por defeito 
   * os pinos 2 SCA e 14 SCL
   */
  Wire.begin(WIRE_SDA,WIRE_SCL);
  /**
   * Inicia a comunicação Serie
   */
  Serial.begin(9600);
}

void loop() {
  //Pede 3 bytes ao Slave
  Wire.requestFrom(SLAVE_ONE,3);
  /*Aguarda pelo fim da comunicação
   * O ciclo while tambem protege da recepção de 
   * menos bytes
   */
  while (Wire.available()){
    //lê os bytes como caracter
    char c = Wire.read();
    //Imprime na consola
    Serial.print(c);
    }
    //faz quebra de linha
    Serial.println();

}
