int FRONT_LEFT_GO = 19;
int FRONT_LEFT_BACK = 18;
int FRONT_LEFT_SPEED = 21;

int FRONT_RIGHT_GO = 16;
int FRONT_RIGHT_BACK = 17;
int FRONT_RIGHT_SPEED = 23;

int BEHIND_RIGHT_GO = 33;
int BEHIND_RIGHT_BACK = 32;
int BEHIND_RIGHT_SPEED = 22;

int BEHIND_LEFT_GO = 25;
int BEHIND_LEFT_BACK = 26;
int BEHIND_LEFT_SPEED = 27;

int STOP =      0; //停止;
int FORWARD =   1; //前进;
int BACKWARD =  2; //后退;
int TURNLEFT =  3; //左转弯;
int TURNRIGHT = 4; //右转弯;

void setup() {
  // put your setup code here, to run once:
  pinMode(FRONT_LEFT_GO, OUTPUT);
  pinMode(FRONT_LEFT_BACK, OUTPUT);
  pinMode(FRONT_LEFT_SPEED, OUTPUT);

  pinMode(FRONT_RIGHT_GO, OUTPUT);
  pinMode(FRONT_RIGHT_BACK, OUTPUT);
  pinMode(FRONT_RIGHT_SPEED, OUTPUT);

  pinMode(BEHIND_RIGHT_GO, OUTPUT);
  pinMode(BEHIND_RIGHT_BACK, OUTPUT);
  pinMode(BEHIND_RIGHT_SPEED, OUTPUT);

  pinMode(BEHIND_LEFT_GO, OUTPUT);
  pinMode(BEHIND_LEFT_BACK, OUTPUT);
  pinMode(BEHIND_LEFT_SPEED, OUTPUT);
}

void loop() {
  // 设置
  analogWrite(FRONT_LEFT_SPEED, 30);  
  analogWrite(FRONT_RIGHT_SPEED, 30);
  analogWrite(BEHIND_LEFT_SPEED, 30);  
  analogWrite(BEHIND_RIGHT_SPEED, 30);
}
// 停止
void doStop(int time) {
  digitalWrite(FRONT_LEFT_GO, LOW);
  digitalWrite(FRONT_LEFT_BACK, LOW);
  digitalWrite(FRONT_RIGHT_GO, LOW);
  digitalWrite(FRONT_RIGHT_BACK, LOW);
  digitalWrite(BEHIND_LEFT_GO, LOW);
  digitalWrite(BEHIND_LEFT_BACK, LOW);
  digitalWrite(BEHIND_RIGHT_GO, LOW);
  digitalWrite(BEHIND_RIGHT_BACK, LOW);
  delay(time * 100);
}

// 前进
void doGo(int time) {
  digitalWrite(FRONT_LEFT_GO, HIGH);
  digitalWrite(FRONT_LEFT_BACK, LOW);
  digitalWrite(FRONT_RIGHT_GO, HIGH);
  digitalWrite(FRONT_RIGHT_BACK, LOW);
  digitalWrite(BEHIND_LEFT_GO, HIGH);
  digitalWrite(BEHIND_LEFT_BACK, LOW);
  digitalWrite(BEHIND_RIGHT_GO, HIGH);
  digitalWrite(BEHIND_RIGHT_BACK, LOW);
  delay(time * 100);
}
// 后退
void doBack(int time) {
  digitalWrite(FRONT_LEFT_GO, LOW);
  digitalWrite(FRONT_LEFT_BACK, HIGH);
  digitalWrite(FRONT_RIGHT_GO, LOW);
  digitalWrite(FRONT_RIGHT_BACK, HIGH);
  digitalWrite(BEHIND_LEFT_GO, LOW);
  digitalWrite(BEHIND_LEFT_BACK, HIGH);
  digitalWrite(BEHIND_RIGHT_GO, LOW);
  digitalWrite(BEHIND_RIGHT_BACK, HIGH);
  delay(time * 100);
}
// 顺时针旋转
void doClockwise(int time) {
  digitalWrite(FRONT_LEFT_GO, HIGH);
  digitalWrite(FRONT_LEFT_BACK, LOW);
  digitalWrite(FRONT_RIGHT_GO, LOW);
  digitalWrite(FRONT_RIGHT_BACK, HIGH);
  digitalWrite(BEHIND_LEFT_GO, HIGH);
  digitalWrite(BEHIND_LEFT_BACK, LOW);
  digitalWrite(BEHIND_RIGHT_GO, LOW);
  digitalWrite(BEHIND_RIGHT_BACK, HIGH);
  delay(time * 100);
}
// 逆时针旋转
void doAnticlockwise(int time) {
  digitalWrite(FRONT_LEFT_GO, LOW);
  digitalWrite(FRONT_LEFT_BACK, HIGH);
  digitalWrite(FRONT_RIGHT_GO, HIGH);
  digitalWrite(FRONT_RIGHT_BACK, LOW);
  digitalWrite(BEHIND_LEFT_GO, LOW);
  digitalWrite(BEHIND_LEFT_BACK, HIGH);
  digitalWrite(BEHIND_RIGHT_GO, HIGH);
  digitalWrite(BEHIND_RIGHT_BACK, LOW);
  delay(time * 100);
}

// 左平移
void doLeft(int time) {
  digitalWrite(FRONT_LEFT_GO, LOW);
  digitalWrite(FRONT_LEFT_BACK, HIGH);
  digitalWrite(FRONT_RIGHT_GO, HIGH);
  digitalWrite(FRONT_RIGHT_BACK, LOW);
  digitalWrite(BEHIND_LEFT_GO, HIGH);
  digitalWrite(BEHIND_LEFT_BACK, LOW);
  digitalWrite(BEHIND_RIGHT_GO, LOW);
  digitalWrite(BEHIND_RIGHT_BACK, HIGH);
  delay(time * 100);
}

// 右平移
void doRight(int time) {
  digitalWrite(FRONT_LEFT_GO, HIGH);
  digitalWrite(FRONT_LEFT_BACK, LOW);
  digitalWrite(FRONT_RIGHT_GO, LOW);
  digitalWrite(FRONT_RIGHT_BACK, HIGH);
  digitalWrite(BEHIND_LEFT_GO, LOW);
  digitalWrite(BEHIND_LEFT_BACK, HIGH);
  digitalWrite(BEHIND_RIGHT_GO, HIGH);
  digitalWrite(BEHIND_RIGHT_BACK, LOW);
  delay(time * 100);
}
