//more_ptr.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int x,*p,**m;
  x = 100;
  p = &x;
  m = &p;
  cout << "**m="<<**m<<endl;
  cout << "*p=" << *p << endl;
  cout << "x=" << x << endl;
  getch();
}  