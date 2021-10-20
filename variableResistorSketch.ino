
int ledNum = 5;
int leds[5] = {7, 6, 5, 4, 3};

int analogPin = A0;
int resVal = 0;

void setup() {
  // put your setup code here, to run once:

  for(int i = 0; i < ledNum; i++){
    pinMode(leds[i], OUTPUT);
    // testing each LED after initializing
    digitalWrite(leds[i], HIGH);
    delay(1000);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:  
  resVal = analogRead(analogPin);

  if(resVal < 205){
    for(int i = 0; i < ledNum; i++){
      digitalWrite(leds[i], HIGH);
    }
  } else if (resVal < 410) {
    int closed = 1;
    for(int i = 0; i < ledNum - closed; i++){
      digitalWrite(leds[i], HIGH);
    }

    for (int i = ledNum - closed; i < ledNum; i++){
      digitalWrite(leds[i], LOW);
    }
  } else if (resVal < 615) {
    int closed = 2;
    for(int i = 0; i < ledNum - closed; i++){
      digitalWrite(leds[i], HIGH);
    }

    for (int i = ledNum - closed; i < ledNum; i++){
      digitalWrite(leds[i], LOW);
    }
  } else if (resVal < 820) {
    int closed = 3;
    for(int i = 0; i < ledNum - closed; i++){
      digitalWrite(leds[i], HIGH);
    }

    for (int i = ledNum - closed; i < ledNum; i++){
      digitalWrite(leds[i], LOW);
    }
  }   else if (resVal < 1023) {
    int closed = 4;
    for(int i = 0; i < ledNum - closed; i++){
      digitalWrite(leds[i], HIGH);
    }

    for (int i = ledNum - closed; i < ledNum; i++){
      digitalWrite(leds[i], LOW);
    }
  } else {
    for (int i = 0; i < ledNum; i++){
      digitalWrite(leds[i], LOW);
    }
  }
}
