//name_ptr02.cpp
#include <iostream.h>
#include <conio.h>
const int N=5;
int *get_array();
void main()
{ int i,*p;
  p = get_array();
  for (i=0;i<N;i++)
  cout << *p++ <<' ';
  delete[] p;
  getch();
}
 int *get_array()
 { int *p=new int[N];
   for (int i=0;i<N;i++)
   *(p+i) = (i+1)*(i+1);
   return p;
 }    