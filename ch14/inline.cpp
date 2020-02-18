//inline.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
inline int max(int,int);
void main()
{ int a[SIZE],big;
  for (int i=0;i<SIZE;i++)
  a[i]=random(101);
  big = a[0];
  for (int i=1;i<SIZE;i++)
  big = max(big,a[i]);
  cout << "Big=" << big;
  getch();
}
inline int max(int a,int b)
{ return (a>b ? a : b); }
