//ptr_asign.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int x;
  int *p1,*p2;
  p1 = &x;
  p2 = p1;	//���Ф��]�w
  cout << "p2=" << p2 << endl;
  getch();
}