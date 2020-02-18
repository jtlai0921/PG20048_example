//ptr_amp.cpp
#include <iostream.h>
#include <conio.h>
void add_one(int*);
void main()
{ int a=10,*b;
  b = &a;
  add_one(b);
  cout << "*b=" << *b << endl;
  cout << " a=" << a << endl;
  getch();
}
void add_one(int *a)
{ (*a)++; }
