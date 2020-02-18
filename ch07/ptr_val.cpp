//ptr_val.cpp
#include <iostream.h>
#include <conio.h>
void add(int,int);
void main()
{ int *a,*b;
  a = new int(10);
  b = new int(20);
  add(*a,*b+5);
  getch();
}
void add(int x,int y)
{ cout << "sum="<<(x+y)<<endl; }