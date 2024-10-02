const int a = 7;
const int b = 8;
const int c = 9;
const int d = 10;
const int e = 11;
const int f = 12;
const int g = 13;

// pola array buat angka 0 sampai 9nya
const byte digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // pola bentuk angka 0
  {0, 1, 1, 0, 0, 0, 0}, // pola bentuk angka 1
  {1, 1, 0, 1, 1, 0, 1}, // pola bentuk angka 2
  {1, 1, 1, 1, 0, 0, 1}, // pola bentuk angka 3
  {0, 1, 1, 0, 0, 1, 1}, // pola bentuk angka 4
  {1, 0, 1, 1, 0, 1, 1}, // pola bentuk angka 5
  {1, 0, 1, 1, 1, 1, 1}, // pola bentuk angka 6
  {1, 1, 1, 0, 0, 0, 0}, // pola bentuk angka 7
  {1, 1, 1, 1, 1, 1, 1}, // pola bentuk angka 8
  {1, 1, 1, 1, 0, 1, 1}  // pola bentuk angka 9
};

int currentDigit = 0; 
unsigned long prevMilis = 0; 
const long interval = 1000; // dalam astuan milisekon yang arrtinya 1000 = 1 detik

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  displayDigit(currentDigit);
}

void loop() {
  unsigned long currentMilis = millis();
  
  if (currentMilis - prevMilis >= interval) {
    prevMilis = currentMilis; 
    currentDigit++; 

    if (currentDigit > 9) {
      currentDigit = 0;
    }

    
    displayDigit(currentDigit);
  }
}


void displayDigit(int digit) {
  digitalWrite(a, digits[digit][0]);
  digitalWrite(b, digits[digit][1]);
  digitalWrite(c, digits[digit][2]);
  digitalWrite(d, digits[digit][3]);
  digitalWrite(e, digits[digit][4]);
  digitalWrite(f, digits[digit][5]);
  digitalWrite(g, digits[digit][6]);
}
