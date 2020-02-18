//array_ptr.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *p[5],a=15,b=10,c=20,d=30,e=40;
  p[0]=&a;
  p[1]=&b;
  p[2]=&c;
  p[3]=&d;
  p[4]=&e;
  for (int i=0;i<5;i++)
  cout << *p[i]<<" "<<p[i]<<endl;
  getch();
}