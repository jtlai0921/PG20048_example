//init_cal.cpp
#include <iostream.h>
#include <conio.h>
const float PI=3.14159;
const radius = 10.0;
void main()
{ float *area=new float(PI*radius*radius);
  cout << "Area="<<*area<<endl;
  delete area;
  getch();
}