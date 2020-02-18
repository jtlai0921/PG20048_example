//bool.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ bool judge;
  short a=4,b=12;
  judge = a <= b;	//比較
  cout << "judge=" << judge << endl;
  judge = false;	//值為0
  cout << "false=" << judge << endl;
  judge = true;	//值為1
  cout << "true=" << judge << endl;
  getch();
}