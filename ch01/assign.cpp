//assign.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=12,b=32,c=10,d=21,e=14;
  a += b;	//����a=a+b;
  b -= c;	//����b=b-c;
  c *= 3;	//����c=c*3;
  d /= 4;	//����d=d/4;
  e %= 5;	//����e=e%5;
  cout << "a=" << a << endl
       << "b=" << b << endl
       << "c=" << c << endl
       << "d=" << d << endl
       << "e=" << e << endl;
  getch();
}
