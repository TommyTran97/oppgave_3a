void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    int antall = Serial.read();
    for(int i = 0; i < antall; i++)
    {
      delay(50);
      Serial.print("*");
      Serial.println();
    }
 
    
    
  }

}
