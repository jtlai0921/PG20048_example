//modf.cpp
#include <iostream.h>
#include <conio.h>
#include <math.h>
void main(void)
{
  double fraction, integer;
  double number = 103400.567;
  fraction = modf(number, &integer);
  cout<<number<<"��Ƴ�����:"<<integer<<" �p�Ƴ�����:"<<fraction;
  getch();
}
