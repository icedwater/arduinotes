/*
* I can't license these since they're basically copied
* from Bob Dukic's book, Coding the Arduino. But we'll
* learn from here.
*/

int count = 0;
const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  while (count < 10) {
    digitalWrite(LED, HIGH);
    delay(count*100);
    digitalWrite(LED, LOW);
    delay(1000);
    count = count + 1;
  }
}
