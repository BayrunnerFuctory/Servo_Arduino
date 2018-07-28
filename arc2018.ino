#include<Servo.h>

//【ポート番号名前付け】
#define horizon1_in A7//サーボ水平の1bit目 INPUT PIN番号A7
#define horizon0_in A6//サーボ水平の2bit目 INPUT PIN番号A6
#define catch1_in A5//サーボ掴みの1bit目   INPUT PIN番号A5
#define catch0_in A4//サーボ掴みの2bit目   INPUT PIN番号A4
#define horizon_out 3 //サーボ水平のOUTPUT PIN番号D3
#define catch_out 11 //サーボ掴みのOUTPUT PIN番号D11

// スタートDelay
int STARTDELAY = 0; //通常時：0 テスト時：2

//サーボ変数定義
Servo servo_horizon;
Servo servo_catch;

void setup() {
//  pinMode(horizon1_in, INPUT);
//  pinMode(horizon0_in, INPUT);
//  pinMode(catch1_in, INPUT);
//  pinMode(catch0_in, INPUT);
  pinMode(horizon_out, OUTPUT);
  pinMode(catch_out, OUTPUT);
  servo_horizon.attach(horizon_out);
  servo_catch.attach(catch_out);
//  servo_covor.write(2);

  Serial.begin(9600);
}

// int SERVO_CLOSE = 45;
// int SERVO_OPEN = 2;


void loop()
{
  // put your main code here, to run repeatedly:
  if (STARTDELAY == 0)
  {
    delay(500);
    STARTDELAY = 1;
  }
  else if (STARTDELAY == 1)
  {
      MAIN();
  }
  else if (STARTDELAY == 2)
  {
    test();
  }
}




