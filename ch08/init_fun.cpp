//init_fun.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{ randomize();
  int *a=new int(random(100));
  cout << "a="<<*a<<endl;
  delete a;
  getch();
}