//mix_03.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
#include <math.h>			//sin,cos
void main()
{ double x,y;
  x=3.2;
  y=pow(x,4)+3*pow(x,3)+2*pow(x,2)+6*x-7;
  cout << "x^4+3x^3+2x^2+6x-7=" << y<<endl;
  getch();
}  