const int led = 5;
const int led2 = 21;

const int STEP = 5;
const int TIME = 50;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;

  i = 0;

  while(i <= 255){
    analogWrite(led, i);
    analogWrite(led2, i);
    delay(TIME);
    i = i + STEP;
  }

  i = 255;

  while(i >= 0){
    analogWrite(led, i);
    analogWrite(led2, i);
    delay(TIME);
    i = i - STEP;
  }
}
