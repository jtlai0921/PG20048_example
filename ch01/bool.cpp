//bool.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ bool judge;
  short a=4,b=12;
  judge = a <= b;	//���
  cout << "judge=" << judge << endl;
  judge = false;	//�Ȭ�0
  cout << "false=" << judge << endl;
  judge = true;	//�Ȭ�1
  cout << "true=" << judge << endl;
  getch();
}