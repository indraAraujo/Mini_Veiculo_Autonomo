
void frente() { 
  digitalWrite(motorA1A, HIGH); 
  digitalWrite(motorA1B, LOW); 
  digitalWrite(motorB1A, HIGH);
  digitalWrite(motorB1B, LOW); 
  analogWrite(motorA1A, 220);
  analogWrite(motorB1A, 255);
}

void esquerda() {
  digitalWrite(motorA1A, LOW); 
  digitalWrite(motorA1B, HIGH); 
  digitalWrite(motorB1A, HIGH);
  digitalWrite(motorB1B, LOW); 
  analogWrite(motorA1A, 100);
  analogWrite(motorB1B, 100);
}

void direita() {
  digitalWrite(motorA1A, LOW); 
  digitalWrite(motorA1B, HIGH); 
  digitalWrite(motorB1A, HIGH);
  digitalWrite(motorB1B, LOW); 
  analogWrite(motorB1A, 100);
  analogWrite(motorA1B, 100);
  
}

void resetar(){
  digitalWrite(motorA1A, LOW); 
  digitalWrite(motorA1B, LOW); 
  digitalWrite(motorB1A, LOW);
  digitalWrite(motorB1B, LOW); 
  
}

