//side_effect.cpp
#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
int side_x(int *,int);
void main()
{ int a=10,*ptr,c;
  ptr = new int;
  c = side_x(ptr,a);
  cout <<setw(3)<<a
       <<setw(3)<<*ptr
       <<setw(3)<<c<<endl;
  (*ptr)++;
  a = *ptr * c;
  cout <<setw(3)<<a
       <<setw(3)<<*ptr
       <<setw(3)<<c<<endl;
  a = side_x(&c,*ptr);
  cout <<setw(3)<<a
       <<setw(3)<<*ptr
       <<setw(3)<<c<<endl;
  delete ptr;
  getch();
}

//side_x
int side_x(int *a,int b)
{ *a = 2;
  b = b * *a;
  return b;
}
