void SERVO_CATCH()
{
  
  input_val3 = analogRead(catch1_in);
  input_val4 = analogRead(catch2_in);
  //サーボ掴み11(開き最大)
  if (det_di(input_val3) == true && det_di(input_val4) == true) {
    servo_case1();
  }
  //サーボ掴み01(閉じる)
  else if ( det_di(input_val3) == false && det_di(input_val4) == true) {
    servo_case2();
  }
  //サーボ掴み10(開く)
  else if ( det_di(input_val3) == true && det_di(input_val4) == false) {
    servo_case3();
  }
  //サーボ掴み00(現状維持)
  else if ( det_di(input_val3) == false && det_di(input_val4) == false) {
    servo_case4();
  }
}
void servo_case1()
{
  // servo_catch.write(SERVO_OPEN);
}
void servo_case2()
{
  servo_catch.write(SERVO_CLOSE);

}
void servo_case3()
{
  servo_catch.write(SERVO_OPEN);
}
void servo_case4()
{

}

