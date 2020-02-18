//include04.cpp
#include <iostream.h>
#include <conio.h>
#define ABS(a) (a)<0?-(a):(a)
#define _ABS(a) a<0?-a:a
void main()
{ cout << "ABS=\n";
  cout << (ABS(-10)) << endl;
  cout << (ABS(20-30))<< endl;
  cout << "_ABS=\n";
//  cout << (_ABS(-10)) << endl; Error
  cout << (_ABS(20-30))<< endl;
  getch();
}

