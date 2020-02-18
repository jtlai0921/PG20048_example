//mix_02.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
#include <math.h>			//sin,cos
void main()
{ float x,y;
  x=90-25;
  y=sin(x*3.14/180);
  cout << "sin("<<x<<")="<< y << endl;
  y=cos(x*3.14/180);
  cout << "cos("<<x<<")="<< y << endl;
  getch();
}
