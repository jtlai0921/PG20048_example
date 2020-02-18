//const04.cpp
#include <iostream.h>
#include <conio.h>
const float PI = 3.14159;
const float *const CPI=&PI;
void main()
{ float area;
  area = *CPI * 10 * 10;
  cout << "area=" << area << endl;
  getch();
}

