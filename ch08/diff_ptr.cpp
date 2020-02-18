//diff_ptr.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ double x=100.01,y;
  int *p;
  p = &x;
  y = *p;
  cout << "y=" << y << endl;
  getch();
}