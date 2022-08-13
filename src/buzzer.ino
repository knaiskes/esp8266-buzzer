const int buzzerPin = 14; // D5
const int frequency = 1400;
const int duration = 5000;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  tone(buzzerPin, frequency, duration);
  delay(1000); // 1 second
}
