//name_ptr04.cpp
#include <iostream.h>
#include <conio.h>
int *get_sum(int *,int*);
void main()
{ int *a,*b,*p;
  a = new int(10);
  b = new int(20);
  p = get_sum(a,b);
  cout <<"*a="<<*a<<endl
       <<"*b="<<*b<<endl
       <<"*p="<<*p<<endl;
  delete p;
  delete b;
  delete a;
  getch();
}
int  *get_sum(int *a,int *b)
{ int *p=new int(*a+*b);
  (*a)++;
  --(*b);
  return p;
}