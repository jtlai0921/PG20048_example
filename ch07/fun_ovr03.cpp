//fun_ovr03.cpp
#include <iostream.h>
#include <conio.h>
int add(int,int);
float add(float,float);
float add(float,int);
float add(int,float);
void main()
{ int a=10,b=20;
  cout << "a+b=" << add(a,b) << endl;
  float p=11.23, q=32.22;
  cout<< "p+q=" << add(p,q) << endl;
  cout << "a+p=" << add(a,p) << endl;
  cout << "q+b=" << add(q,b) << endl;
  getch();
}
int add(int x,int y)
{ return (x+y); }
float add(float x,float y)
{ return (x+y); }
float add(float x,int y)
{ return (x+y); }
float add(int x,float y)
{ return (x+y); }
