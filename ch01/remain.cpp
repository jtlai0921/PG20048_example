//remain.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int a=345, b= 7, c;
  c = a / b;				//整數相除得商
  cout << "商=" << c << endl;
  c = a % b;				//利用餘數運算符號
  cout << "餘數=" << c << endl;
  getch();
}  