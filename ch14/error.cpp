//error.cpp
#include <iostream.h>
#include <conio.h>
#define MAX 1000
#if (MAX!=100)
#error MAX must be 100
#endif
void main()
{
  cout << "Data OK!";
  getch();
}

