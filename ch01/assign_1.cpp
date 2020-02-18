//assign_1.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int a,b,c,d;
  a=b=c=d=3;
  a += b * c + 2;
  cout <<a<<' '<<b<<' '<<c<<' '<<d<<endl;
  b -= c * (a = 2);
  cout <<a<<' '<<b<<' '<<c<<' '<<d<<endl;
  c *= a + b++ * d++;
  cout <<a<<' '<<b<<' '<<c<<' '<<d<<endl;
  d /= --a + ++b / 2;
  cout <<a<<' '<<b<<' '<<c<<' '<<d<<endl;
  a = b = c++ * d--;
  cout <<a<<' '<<b<<' '<<c<<' '<<d<<endl;
  getch();
}
