void setup() {
  Serial.begin (115200);
}

void loop() {
  int ldr_value = analogRead(A0);

  int ldr_value = analogRead(A0);
String json = "{\"ldr_value\": " + String(ldr_value) + "}";
Serial.println(json);


  if (ldr_value < 500) {
      digitalWrite(LED_BUILTIN, HIGH);
    delay(random(100, 500));
    digitalWrite(LED_BUILTIN, LOW);
    delay(random(100, 500));
  }
}
