
void SERVO_HORIZON()
{
  input_val1 = analogRead(horizon1_in);
  input_val2 = analogRead(horizon2_in);
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
}
void servo_case1()
{

}
void servo_case2()
{
  servo_horizon.write();

}
void servo_case3()
{
  servo_horizon.write();
}
void servo_case4()
{

}

