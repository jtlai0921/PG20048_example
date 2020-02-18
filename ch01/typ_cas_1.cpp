//typ_cas_1.cpp
#include <iostream.h>		//cout
#include <conio.h>		//getch()
void main()
{ int a=6,b=7,c;
  float x=4.3,y=3.2,z;
  c = a * b;			//整數相乘=整數
  cout << "c=" << c << endl;
  c = a * (int) x;		//轉為整數
  cout << "c=" << c << endl;
  c = (int) x * (int) y;		//轉為整數
  cout << "c=" << c << endl;
  z = a * b / 2.0;          //以2.0浮點數為計算型態
  cout << "z=" << z << endl;
  z = a * (int) x;          //整數乘整數=>浮點數
  cout << "z=" << z << endl;
  z = (int) x * (int) y;      //浮點數轉為整數再運算
  cout << "z=" << z << endl;
  z = float (a) / b;		//將a轉為浮點數
  cout << "z=" << z << endl;
  getch();
}
