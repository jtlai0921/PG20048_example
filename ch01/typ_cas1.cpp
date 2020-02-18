//typ_cas1.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int a=6,b=7,c;
  float x=4.3,y=3.2,z;
  c = a * b;				//俱计=俱计
  cout << "c=" << c << endl;
  c = a * x;				//俱计疊翴计=俱计
  cout << "c=" << c << endl;
  c = x * y;				//疊翴计疊翴计=俱计
  cout << "c=" << c << endl;
  z = a * b;            //俱计=疊翴计
  cout << "z=" << z << endl;
  z = a * x;            //俱计疊翴计=疊翴计
  cout << "z=" << z << endl;
  z = x * y;            //疊翴计疊翴计=疊翴计
  cout << "z=" << z << endl;
  getch();
}


