#define BUTTON 5
#define LED 4

bool ledState = false;

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {  // button pressed
    ledState = !ledState;            // toggle
    digitalWrite(LED, ledState);
    delay(300);                      // simple debounce
  }
}
