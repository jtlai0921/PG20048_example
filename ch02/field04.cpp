//field04.cpp    			�]�w���ĺ�T��
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ const int f=6; 			//�]�w��X��e
  float pi=3.14159;
  cout << "���ĺ�T��4��:\n";
  cout.precision(4);		//�]�w���ĺ�T��
  cout << setw(f) << pi << endl;
  cout << setw(f) << pi/4 << endl;
  cout << setw(f) << pi*10*10 << endl;
  getch();	//�Ȱ�
}
