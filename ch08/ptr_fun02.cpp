//ptr_fun02.cpp	以指標交換
#include <iostream.h>
#include <conio.h>
void swap_data(int*,int*);
void main()
{ int a,b;
  a=10;
  b=15;
  cout << "交換前:" << a <<" "<< b << endl;
  swap_data(&a,&b);
  cout << "交換後:" << a <<" "<< b << endl;
  getch();
}
void swap_data(int *a,int *b)
{ int t;
  t = *a;
  *a = *b;
  *b = t;
}