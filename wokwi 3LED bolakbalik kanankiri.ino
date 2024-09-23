// Pin definitions for LEDs
const int led1 = 8;  // LED 1 connected to pin 8
const int led2 = 9;  // LED 2 connected to pin 9
const int led3 = 10;  // LED 3 connected to pin 10

void setup() {
  // Set LED pins as output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Turn on LED 1, turn off others
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500); // Wait for 500ms
  
  // Turn on LED 2, turn off others
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(500); // Wait for 500ms
  
  // Turn on LED 3, turn off others
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500); // Wait for 500ms

  // Turn on LED 3, turn off others
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500); // Wait for 500ms

  // Turn on LED 3, turn off others
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500); // Wait for 500ms

  // Turn on LED 2, turn off others
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(500); // Wait for 500ms

  // Turn on LED 1, turn off others
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500); // Wait for 500ms

  // Turn on LED 1, turn off others
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(500); // Wait for 500ms
}
