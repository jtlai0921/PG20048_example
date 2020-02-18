//fmod.cpp
#include <iostream.h>
#include <conio.h>
#include <math.h>
void main(void)
{
  double x = 5.0, y = 2.2;
  double remainder;
  remainder = fmod(x,y);
  cout<<x<<"除以"<<y<<"之餘數="<< remainder;
  getch();
}
