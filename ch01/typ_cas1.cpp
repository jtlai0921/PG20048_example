//typ_cas1.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int a=6,b=7,c;
  float x=4.3,y=3.2,z;
  c = a * b;				//��Ƭۭ�=���
  cout << "c=" << c << endl;
  c = a * x;				//��ƭ��B�I��=���
  cout << "c=" << c << endl;
  c = x * y;				//�B�I�ƭ��B�I��=���
  cout << "c=" << c << endl;
  z = a * b;            //��Ƭۭ�=�B�I��
  cout << "z=" << z << endl;
  z = a * x;            //��ƭ��B�I��=�B�I��
  cout << "z=" << z << endl;
  z = x * y;            //�B�I�ƭ��B�I��=�B�I��
  cout << "z=" << z << endl;
  getch();
}


