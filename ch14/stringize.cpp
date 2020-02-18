//stringize.cpp
#include <iostream.h>
#include <conio.h>
#define TOSTR(s) #s
void main()
{
  cout << TOSTR(20+30=50)<<endl;
  cout << TOSTR(I enjoy the dinner.)<<endl;
  getch();
}

