//field01.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int i=1;
  cout.fill('*');	//�]�w��R�r��
  cout.width(5);	//�]�w��X��e
  cout << i << endl;
  cout.width(5);cout << i*10 << endl;
  cout.width(5);cout << i*100 << endl;
  getch();
}
