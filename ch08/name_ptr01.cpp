//name_ptr01.cpp
#include <iostream.h>
#include <conio.h>
int *get_sum(int,int);
void main()
{ int a=10,b=20,*p;
  p = get_sum(a,b);
  cout << "sum=" << *p;
  delete p;
  getch();
}
 int *get_sum(int a,int b)
 { int *p=new int (a+b);
   return p;
 }    