const int ledPin = 13;    // пин для светодиода
const int buttonPin = 6;  // пин для кнопки

void setup() {
  pinMode(ledPin, OUTPUT);      // светодиод — выход
  pinMode(buttonPin, INPUT_PULLUP);    // кнопка — вход
}

void loop() {
  if (digitalRead(buttonPin)==LOW){
    digitalWrite(ledPin, HIGH); // включаем светодиод
    delay(500);                     
    digitalWrite(ledPin, LOW);  // выключаем
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
