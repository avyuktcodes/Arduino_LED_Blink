void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialize the built-in LED pin
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn LED ON
  delay(1000);                     // Wait 1 second
  digitalWrite(LED_BUILTIN, LOW);  // Turn LED OFF
  delay(1000);                     // Wait 1 second
}
