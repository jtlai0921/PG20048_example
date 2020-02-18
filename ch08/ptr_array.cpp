//ptr_array.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *ptr,a[5]={5,10,15,20,25},i;
  for (i=0;i<5;i++)
  cout << a[i] << " ";
  cout << endl;
  for (i=0;i<5;i++)
  cout << *(a+i) << " ";
  cout << endl;
  ptr = a;
  for (i=0;i<5;i++)
  cout << *(ptr+i) << " ";
  cout << endl;
  getch();
}