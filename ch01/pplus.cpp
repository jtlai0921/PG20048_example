//pplus.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,b=14;
  a++;		//����a=a+1;��[�o 11
  ++b;		//����b=b+1;�e�[�o 15
  cout << "a++="<< a << endl;
  cout << "++b="<< b << endl;
  cout << "a="<< a++ << endl;	//��X 11 ��A�[�@
  cout << "a++="<< a << endl;	//�[�@�ᤧ�� 12
  cout << "b="<< ++b << endl;	//���[�@��A��X 16 
  getch();
}
