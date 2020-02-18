//const01.cpp
#include <iostream.h>
#include <conio.h>
const int *cptr;
const int wages = 36000;
void main()
{ cptr = &wages;
  cout << *cptr;
  getch();
}

