char dat;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available()){
    dat=Serial.read();
    if (dat=='a'){
      Serial.print("Izquierda");
      digitalWrite(2, HIGH);
    }
    else{
      digitalWrite(2, LOW);
    }
  }
}
