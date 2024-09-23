// Pin definitions for LEDs
//seksi kiri
const int led1 = 8;  // LED 1 connected to pin 8 (ijo)
const int led2 = 9;  // LED 2 connected to pin 9 (kuning)
const int led3 = 10;  // LED 3 connected to pin 10 (merah)

//seksi bawah
const int led4 = 5;  // LED 4 connected to pin 5 (ijo)
const int led5 = 6;  // LED 5 connected to pin 6 (kuning)
const int led6 = 7;  // LED 6 connected to pin 7 (merah)

//seksi kanan
const int led7 = 2;  // LED 7 connected to pin 2 (ijo)
const int led8 = 3;  // LED 8 connected to pin 3 (kuning)
const int led9 = 4;  // LED 9 connected to pin 4 (merah)

void setup() {
  // Set LED pins as output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  //NYALA KIRI
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led9, HIGH);
  delay(5000); // Wait for 5DETIK
  digitalWrite(led1, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led9, LOW);

  //NYALA KUNING
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led8, HIGH);
  delay(500); // Wait for 500ms
  digitalWrite(led2, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led8, LOW);
  
  //NYALA BAWAH
  digitalWrite(led4, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led9, HIGH);
  delay(5000); // Wait for 5DETIK
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led9, LOW);

  //NYALA KUNING
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led8, HIGH);
  delay(500); // Wait for 500ms
  digitalWrite(led2, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led8, LOW);

  //NYALA KANAN
  digitalWrite(led7, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, HIGH);
  delay(5000); // Wait for 5DETIK
  digitalWrite(led7, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led6, LOW);

  //NYALA KUNING
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led8, HIGH);
  delay(500); // Wait for 500ms
  digitalWrite(led2, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led8, LOW);

  //NYALA BAWAH
  digitalWrite(led4, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led9, HIGH);
  delay(5000); // Wait for 5DETIK
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led9, LOW);

  //NYALA KUNING
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led8, HIGH);
  delay(500); // Wait for 500ms
  digitalWrite(led2, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led8, LOW);
}