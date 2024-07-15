int led = 2;
int sensor = 7;
int value = 0;

void setup() {
  pinMode(led, OUTPUT); // 2번 핀을 출력하는 핀으로 설정
  pinMode(sensor, INPUT); // 7번 핀을 입려갛는 핀으로 설정

}

void loop() {
  value = digitalRead(sensor); // 적외선 물체 감지 센서에서 HIGH값 또는 LOW값을 받은 다음 7번 핀으로 값을 입력하고, value변수에 입력받은 값을 저장
  // 여기서 센서가 감지한 값이 HIGH일 경우, 물체가 움직임을 감지했고
  // LOW일 경우, 물체가 움직임을 감지하지 못했음을 의미
  if (value == HIGH) digitalWrite(led, HIGH); // 움직임이 감지됐을 경우 LED를 2번 포트를 통해서 5V의 전압을 걸어 빛나게 함
  else digitalWrite(led, LOW); // 움직임이 감지되지 못했을 경우 LED를 2번 포트를 통해서 0V의 전압을 걸게 함

}
