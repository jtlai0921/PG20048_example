//typ_cas_1.cpp
#include <iostream.h>		//cout
#include <conio.h>		//getch()
void main()
{ int a=6,b=7,c;
  float x=4.3,y=3.2,z;
  c = a * b;			//��Ƭۭ�=���
  cout << "c=" << c << endl;
  c = a * (int) x;		//�ର���
  cout << "c=" << c << endl;
  c = (int) x * (int) y;		//�ର���
  cout << "c=" << c << endl;
  z = a * b / 2.0;          //�H2.0�B�I�Ƭ��p�⫬�A
  cout << "z=" << z << endl;
  z = a * (int) x;          //��ƭ����=>�B�I��
  cout << "z=" << z << endl;
  z = (int) x * (int) y;      //�B�I���ର��ƦA�B��
  cout << "z=" << z << endl;
  z = float (a) / b;		//�Na�ର�B�I��
  cout << "z=" << z << endl;
  getch();
}
