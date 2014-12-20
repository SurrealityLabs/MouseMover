#define DELAYTIME (60u * 1000u)

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  static unsigned long previousMillis = 0;
  unsigned long currentMillis = millis();
  
  if(currentMillis - previousMillis >= DELAYTIME) {
    Mouse.move(1, 1);
  } else if(currentMillis - previousMillis >= (DELAYTIME + 100)) {
    Mouse.move(-1, -1);
    previousMillis = currentMillis;
  }
}
