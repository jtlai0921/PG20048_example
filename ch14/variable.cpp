//variable.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=5;
  cout << "for 內a之值:\n";
  for (int i=0;i<a;++i)
  { int a=0;
    a +=i;
    cout << a << ' ';
  }
  cout <<"\nfor 外a之值:"<<a;
  getch();
}

