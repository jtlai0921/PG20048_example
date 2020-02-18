//mix_01.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int x,y;
  x=5;
  y=(x>0)?6*x*x+4*x-5:3*x*x-3*x+5;
  cout << "x為 "<<x <<" 時 y="<< y <<endl;
  x=-5;
  y=(x>0)?6*x*x+4*x-5:3*x*x-3*x+5;
  cout << "x為 "<<x <<" 時 y="<< y <<endl;
  getch();
}
