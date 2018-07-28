
void SERVO_HORIZON()
{
  // input_val1 = analogRead(horizon1_in);
  // input_val2 = analogRead(horizon2_in);
  #define input_val1  false
  #define input_val2  false
  //サーボ水平11(フリー)
  if (input_val1 == true && input_val2 == false){
    servo_case1();
  }
  //サーボ水平01(右移動)
  else if (input_val1 == false && input_val2 == true) {
    servo_case2();
  }
  //サーボ水平10(左移動)
  else if (input_val1 == true && input_val2 == false) {
    servo_case3();
  }
  //サーボ水平00(現状維持)
  else if (input_val1 == false && input_val2 == false) {
    servo_case4();
    // 掴み用サーボ制御
    SERVO_CATCH();
  }
  /*
  //サーボ水平11(フリー)
  if (det_di(input_val1) == true && det_di(input_val2) == true) {
    servo_case1();
  }
  //サーボ水平01(右移動)
  else if ( det_di(input_val1) == false && det_di(input_val2) == true) {
    servo_case2();
  }
  //サーボ水平10(左移動)
  else if ( det_di(input_val1) == true && det_di(input_val2) == false) {
    servo_case3();
  }
  //サーボ水平00(現状維持)
  else if ( det_di(input_val1) == false && det_di(input_val2) == false) {
    servo_case4();
    // 掴み用サーボ制御
    SERVO_CATCH();
  }
  */
}

void servo_case1()
{
  digitalWrite(led,HIGH);
}
void servo_case2()
{
  digitalWrite(led,LOW);
  delay(5000);
  digitalWrite(led,HIGH);
  delay(5000);
  //servo_horizon.write();

}
void servo_case3()
{
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(led,HIGH);
  delay(1000);
  //servo_horizon.write();
}
void servo_case4()
{
  digitalWrite(led,LOW);
  delay(5000);
}

