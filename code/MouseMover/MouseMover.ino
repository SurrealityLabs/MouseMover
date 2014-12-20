#define DELAYTIME (60L * 1000L)

long previousMillis = 0;
unsigned int state = 0;

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  long currentMillis = millis();
  
  if(currentMillis - previousMillis >= DELAYTIME) {
    if(state) {
      Mouse.move(1, 1);
      state = 0;
    } else {
      Mouse.move(-1, -1);
      state = 1;
    }
    previousMillis = currentMillis;
  }
}
