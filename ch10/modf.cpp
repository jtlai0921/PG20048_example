//modf.cpp
#include <iostream.h>
#include <conio.h>
#include <math.h>
void main(void)
{
  double fraction, integer;
  double number = 103400.567;
  fraction = modf(number, &integer);
  cout<<number<<"整數部份為:"<<integer<<" 小數部份為:"<<fraction;
  getch();
}
