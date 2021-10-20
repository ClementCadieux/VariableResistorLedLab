
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
  //Getting the value from the Variable resistor
  resVal = analogRead(analogPin);


  //Assigning a closed led value based on the value of the variable resistor
  int closed;
  
  if(resVal < 205){
    closed = 0;
  } else if (resVal < 410) {
    closed = 1;
  } else if (resVal < 615) {
    closed = 2;
  } else if (resVal < 820) {
    closed = 3;
  }  else if (resVal < 1023) {
    closed = 4;
  } else {
    closed = 5;
  }


  //activating the correct ammount of LED's
  for(int i = 0; i < ledNum - closed; i++){
    digitalWrite(leds[i], HIGH);
  }

  for (int i = ledNum - closed; i < ledNum; i++){
    digitalWrite(leds[i], LOW);
  }
}
