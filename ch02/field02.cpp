//field02.cpp    			�ϥιB�@�l<iomanip.h>�]�t��
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ int i=1;
  cout.fill('#');   //�]�w��R�r��
  cout << setw(5)   //�]�w��X��e
       << i << endl;
  cout << setw(5)
       << i*10 << endl;
  cout << setw(5)
       <<i*100 << endl;
  getch();
}
