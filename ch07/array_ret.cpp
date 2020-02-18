//array_ret.cpp
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#define N 5
void set_array(int[]);
void main()
{ int a[N];
  set_array(a);
  for (int i=0;i<N;i++)
  cout<<a[i]<<' ';
  getch();
}
//set_array()
void set_array(int x[])
{ for (int i=0;i<N;i++)
  x[i]=random(10)+1;
}
