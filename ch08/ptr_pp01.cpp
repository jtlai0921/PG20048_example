//ptr_pp01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *ptr,a=10;
  ptr = &a;
  (*ptr)++; 	//or ++(*ptr);
  cout << "a="<<a<<endl;
  getch();
}
  