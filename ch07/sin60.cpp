//sin60.cpp
#include <iostream.h>
#include <conio.h>
#include <math.h>
const float PI=3.14159;
void main()
{ float thetha=60,sinvalue,cosvalue;
  sinvalue=sin(thetha*PI/180);
  cosvalue=cos(thetha*PI/180);
  cout << "sin60="<<sinvalue<<','
       << "cos60="<<cosvalue<<endl;
  getch();
}       