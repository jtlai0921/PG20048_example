//pplus.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,b=14;
  a++;		//等於a=a+1;後加得 11
  ++b;		//等於b=b+1;前加得 15
  cout << "a++="<< a << endl;
  cout << "++b="<< b << endl;
  cout << "a="<< a++ << endl;	//輸出 11 後再加一
  cout << "a++="<< a << endl;	//加一後之值 12
  cout << "b="<< ++b << endl;	//先加一後再輸出 16 
  getch();
}
