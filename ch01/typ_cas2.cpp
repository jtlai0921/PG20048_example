//typ_cas2.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short int a=6,c;
  float x=500.123,y=3.2;
  c = a * (short int) x;   	//�N�B�I�ƥ��ର��ƦA�p��=���
  cout << "c=" << c << endl;
  c = (int) x * int(y);			//�B�I�ƥ��ର��ƦA�p��=���
  cout << "c=" << c << endl;
  x = 6634.45; y = 5.44;
  c = (int) x * short(y);		//��ƹB���j��32767
  cout << "c=" << c << endl;
  getch();
}


