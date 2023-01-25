
// ULTRASSONICO
float distanciaUltrassonico() {
  float cmMsec;
  //  Tempo de retorno entre ondas
  long microsec = ultrasonic.timing();
  // Calculo da distância de acordo com o tempo
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  return cmMsec;
}

// INFRAVERMELHO
float distanciaInfravermelho() {
  VL53L0X_RangingMeasurementData_t measure;
    
  infravermelho.rangingTest(&measure, false);

  if (measure.RangeStatus != 4) {  
    return measure.RangeMilliMeter/10;
  } 
}