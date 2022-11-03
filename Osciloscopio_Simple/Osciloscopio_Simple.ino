void setup(){
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int analogValue;
  float voltage;
  
  analogWrite(6, 127);
  analogValue = analogRead(A0); //Sonda en A0
  voltage = analogValue/204.6;

  Serial.println(voltage);
}
