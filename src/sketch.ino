#define LED_PIN 13

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    pulse(LED_PIN, 1000, 1000);
}

void pulse(int pin, int onTime, int offTime) {
    digitalWrite(pin, HIGH);
    delayMicroseconds(onTime);
    digitalWrite(pin, LOW);
    delayMicroseconds(offTime);
}