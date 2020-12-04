#include <Arduino.h>

    int GREEN = 11;
    int YELLOW = 9;
    int RED = 6;
void setup() {
    pinMode(RED, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(GREEN, OUTPUT);
    digitalWrite(RED, 255);
    digitalWrite(YELLOW, 0);
    digitalWrite(GREEN, 0);
}

void loop() {
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    delay(10000);
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    delay(10000);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    delay(4000);
}



