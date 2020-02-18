//cin02.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ short a,b;
  char ch;
  cout << "輸入a,b=";	//十進位輸入
  cin >> a >> b;
  cout << "a+b=" << (a+b) << endl;
  cout << "輸入任意字元:";
  cin >> ch;
  cout << "++ch=" << ++ch << endl;	//遞增後列印
  getch();
}  