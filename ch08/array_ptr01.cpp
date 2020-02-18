//array_ptr01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *p[5],i;
  for (i=0;i<5;i++)
  p[i]=new int((i+2)*4);
  for (i=0;i<5;i++)
  cout << *p[i]<<" ";
  for (i=0;i<5;i++)
  delete p[i];
  getch();
}