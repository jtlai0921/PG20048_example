//mc2.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ float mass,e,C;
  C = 3e8; 					//���t m/sec
  mass = 50 * 0.1/100;
  e = mass * C * C;     //e=mc2 ��ब������
  cout << "��q�l��=" << e << "�J��\n";
  getch();
}   