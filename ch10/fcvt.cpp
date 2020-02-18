//fcvt.cpp
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  char str[25];
  double num;
  int sig = 5;				// 有效位數
  num = 9.876;				// 正數
  gcvt(num, sig, str);
  cout<<"字串 = "<<str<<endl;
  num = -123.4567;     // 負數
  gcvt(num, sig, str);
  cout<<"字串 = "<<str<<endl;
  num = 0.678e5;       //科學記號表示
  gcvt(num, sig, str);
  cout<<"字串 = "<<str<<endl;
  getch();
}