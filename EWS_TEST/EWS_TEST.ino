#define LED_E 4
#define LED_W 5
#define LED_S 6

void setup() {
  pinMode(LED_E, OUTPUT);
  pinMode(LED_W, OUTPUT);
  pinMode(LED_S, OUTPUT);
  
}

void loop() {
  digitalWrite(LED_E, HIGH);
  delay(500);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_W, HIGH);
  delay(500);
  digitalWrite(LED_W, LOW);
  digitalWrite(LED_S, HIGH);
  delay(500);
  digitalWrite(LED_S, LOW);
  
}
