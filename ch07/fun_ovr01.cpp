//fun_ovr01.cpp
#include <iostream.h>
#include <conio.h>
int add_int(int,int);
float add_float(float,float);
void main()
{ int a=10,b=20;
  cout << "a+b=" << add_int(a,b) << endl;
  float p=11.23, q=32.22;
  cout<< "p+q=" << add_float(p,q) << endl;
  getch();
}
int add_int(int x,int y)
{ return (x+y); }
float add_float(float x,float y)
{ return (x+y); }
