int motor_left[] = {D0, D1};
int motor_right[] = {D3, D4};
int led = D6;

void setup() {
  int i;
  for(i = 0; i < 2; i++){
    pinMode(motor_left[i], OUTPUT);
    pinMode(motor_right[i], OUTPUT);
    pinMode(led, OUTPUT);
  }
}

void loop() {

  led_on();
  delay(2000);
  led_off();
  delay(1000);

  drive_forward(1000);
  motor_stop(25);
  drive_backward(1000);
  motor_stop(25);
  turn_left(1000);
  motor_stop(25);
  turn_right(1000);
  motor_stop(1000);
  }


void led_on(){
  digitalWrite(led, HIGH);
}

void led_off(){
  digitalWrite(led, LOW);
}

void motor_stop(int duration){
  digitalWrite(motor_left[0], LOW);
  digitalWrite(motor_left[1], LOW);

  digitalWrite(motor_right[0], LOW);
  digitalWrite(motor_right[1], LOW);

  delay(duration);
}

void drive_forward(int duration){
  digitalWrite(motor_left[0], HIGH);
  digitalWrite(motor_left[1], LOW);

  digitalWrite(motor_right[0], HIGH);
  digitalWrite(motor_right[1], LOW);

  delay(duration);
}

void drive_backward(int duration){
  digitalWrite(motor_left[0], LOW);
  digitalWrite(motor_left[1], HIGH);

  digitalWrite(motor_right[0], LOW);
  digitalWrite(motor_right[1], HIGH);

  delay(duration);
}

void turn_left(int duration){
  digitalWrite(motor_left[0], LOW);
  digitalWrite(motor_left[1], HIGH);

  digitalWrite(motor_right[0], HIGH);
  digitalWrite(motor_right[1], LOW);

  delay(duration);
}

void turn_right(int duration){
  digitalWrite(motor_left[0], HIGH);
  digitalWrite(motor_left[1], LOW);

  digitalWrite(motor_right[0], LOW);
  digitalWrite(motor_right[1], HIGH);

  delay(duration);
}
