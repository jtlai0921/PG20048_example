//fcvt.cpp
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  char str[25];
  double num;
  int sig = 5;				// ���Ħ��
  num = 9.876;				// ����
  gcvt(num, sig, str);
  cout<<"�r�� = "<<str<<endl;
  num = -123.4567;     // �t��
  gcvt(num, sig, str);
  cout<<"�r�� = "<<str<<endl;
  num = 0.678e5;       //��ǰO�����
  gcvt(num, sig, str);
  cout<<"�r�� = "<<str<<endl;
  getch();
}