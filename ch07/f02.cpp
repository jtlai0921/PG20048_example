//f02.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#define swap(x,y) {int t; t=x; x=y; y=t;}
void main()
{ int a,b;
  cout << "Enter a,b="; cin >> a >> b;
  swap(a,b);
  cout << "After swap is:" << a <<" "<< b;
  getch();
}