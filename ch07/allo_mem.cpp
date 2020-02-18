//allo_mem.cpp
#include <iostream.h>
#include <conio.h>
int *get_memory(int);
void main()
{ int *a,*b;
  a = get_memory(2);
  b = get_memory(1);
  cout <<"*a="; cin >>*a;
  cout <<"*(a+1)=";cin >>*(a+1);
  *b=*a + *(a+1);
  cout <<"*b="<<*b<<endl;
  delete [] a;
  delete [] b;
  getch();
}

//get_memory
int *get_memory(int n)
{
  return new int(n);
}
