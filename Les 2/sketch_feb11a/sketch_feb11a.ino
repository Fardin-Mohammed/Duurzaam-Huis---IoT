int A, B, C, D; 

void setup(){
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(115200);   
}

void loop (){
  Serial.println("Hallo!");
  A = random(999);
  B = random(999);
  C = random(999);
  D = random(999);


 Serial.print("A: "); Serial.print(A);
 Serial.print(" B: "); Serial.print(B);
 Serial.print(" C: "); Serial.print(C);
 Serial.print(" D: "); Serial.println(D);

 // Voorwaarden uitvoeren
 digitalWrite(3, (A > B || A < C) ? HIGH : LOW);
 digitalWrite(5, (C > A && A < B) ? HIGH : LOW);
digitalWrite(6, (B > C && B > A && C < A) ? HIGH : LOW);

// Als D het grootste is, laat LED`s knipperen
if (D > A && D > B && D > C) {
  for(int i = 0; i < 5; i++) {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(200);
  }
}

  delay(10000);  // Wacht 10 seconden
}
