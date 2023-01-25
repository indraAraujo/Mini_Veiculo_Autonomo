//Indra Rani Araujo
//Mini Veiculo Autonomo
//2023
#include <Ultrasonic.h>
#include "Adafruit_VL53L0X.h"

//Pinos dos motores
int motorA1A = 2;
int motorA1B = 3; 
int motorB1A = 4;
int motorB1B = 5;

//Pinos do sensor ultrassônico
int trigger = 8;
int echo = 9;

//  Inicializa o sensor ultrasonico nos pinos
Ultrasonic ultrasonic(trigger, echo);

//Instancia objeto do sensor infravermelho
Adafruit_VL53L0X infravermelho = Adafruit_VL53L0X();

void setup() {
  pinMode(motorA1A, OUTPUT);
  pinMode(motorA1B, OUTPUT);
  pinMode(motorB1A, OUTPUT);
  pinMode(motorB1B, OUTPUT);
  // Define todos os pinos dos motores para LOW
  resetar();

  infravermelho.begin();

//   Serial.begin(115200);
}

void loop() {
  frente();
  // descobre se tem parede na frente
  float distancia_frente = distanciaUltrassonico();
  if (distancia_frente <= 30 || distancia_frente >= 3000) { // se tiver parede na frente a 30 cm de distância
    float distancia_direita = distanciaInfravermelho(); // descobre se tem parede do lado direito
    if (distancia_direita <= 20) {    // se tiver parede do lado direito a 20 cm de distância
      resetar();
      esquerda(); // carrinho vira para a esquerda
    } else { // senão, carrinho vira para a direita
      resetar();
      direita();        
    }    
  }
  delay(500); //tempo para virar
  resetar();
}
