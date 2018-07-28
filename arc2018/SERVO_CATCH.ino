
void SERVO_CATCH()
{
  #define input_val3  true
  #define input_val4  false
  //input_val3 = analogRead(catch1_in);
  //input_val4 = analogRead(catch2_in);
  //サーボ掴み11(開き最大)
  if (input_val3 == true && input_val4 == true) {
   servo_case5();
  }
  //サーボ掴み01(閉じる)
  else if (input_val3 == false && input_val4 == true) {
    servo_case6();
  }
  //サーボ掴み10(開く)
  else if (input_val3 == true && input_val4 == false) {
    servo_case7();
  }
  //サーボ掴み00(現状維持)
  else if ( input_val3 == false && input_val4 == false) {
    servo_case8();
  }
  /*
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
  */
}
void servo_case5()
{
  digitalWrite(led,HIGH);
  // servo_catch.write(SERVO_OPEN);
}
void servo_case6()
{
  digitalWrite(led,LOW);
  delay(5000);
  digitalWrite(led,HIGH);
  delay(5000);
  //servo_catch.write(SERVO_CLOSE);

}
void servo_case7()
{
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(led,HIGH);
  delay(1000);
  //servo_catch.write(SERVO_OPEN);
}
void servo_case8()
{
  digitalWrite(led,LOW);
}

