//float_for.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ float a,sum=0;
  for (a=0.1;a<11.2;a+=0.5)	//以float當控制變數
  sum +=a;
  cout << "sum=" << sum << endl;
  getch();
}