//field05.cpp    			�]�w�p�Ʀ��
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ const int f=6; 			//�]�w��X��e
  float pi=3.14159;
  cout << "�p�Ʀ��2��,��e"<< f << " �t�p���I" << endl;
  cout.setf(ios::fixed,ios::floatfield);	//�w�I�p��
  cout.precision(2);		//�]�w�p�Ʀ��2��
  cout << setw(f) << pi << endl;
  cout << setw(f) << pi/4 << endl;
  cout << setw(f) << pi*10*10 << endl;
  getch();	//�Ȱ�
}
