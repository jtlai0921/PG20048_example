//const03.cpp
#include <iostream.h>
#include <conio.h>
const float PI = 3.14159;
void main()
{ int bugNum=0;
  int *const curBug=&bugNum;
  bugNum = 12;
  cout << "*curBug=" << *curBug;
  //curBug = &PI;  //Cannot mody a const object
  getch();
}

