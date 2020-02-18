//variable01.cpp
#include <iostream.h>
#include <conio.h>
#include <string.h>
int x;
char ch,st[5];
void main()
{ x++;						//整體變數
  cout << "x="<<x<<endl;
  ch='A';
  cout << "ch="<<ch<<endl;
  int x =10;				//區域變數
  x++;
  cout << "x="<<x<<endl;
  strcpy(st,"BBB");		//字串複製
  cout << "st="<<st<<endl;
  getch();
}

