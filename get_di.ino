bool det_di(int pin)
{
  bool result = false;
  int i = 0;
  int ON = 0 ;

  if (digitalRead(pin) == HIGH)
  {
    for (i = 0; i <= 2; i++)     //2回繰り返し読む
    {
      if (digitalRead(pin) == HIGH) //指定ピンがHIGHの場合
      {
        ON++;
      }
    }
  }
  if (ON >= 2)     //2回ONの場合
  {
    result = true;  //trueを返す
  }
  return result;
}

