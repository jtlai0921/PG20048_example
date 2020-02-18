//ref_fun.cpp
#include <iostream.h>
#include <conio.h>
int &fun(int);
int x=14;
void main()
{ int a=10;
  x=fun(2*a);
  cout << "x=" << x << endl;
  int b=fun(a);
  cout << "b=" << b << endl;
  cout << "x=" << x << endl;
  fun(5)=a;
  cout << "x="<< x << endl;
  getch();
}
int &fun(int y)
{ x=y*x;
  return x; }