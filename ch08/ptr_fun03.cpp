//ptr_fun03.cpp	�H�ǧ}�洫
#include <iostream.h>
#include <conio.h>
void swap_data(int&,int&);
void main()
{ int a,b;
  a=10;
  b=15;
  cout << "�洫�e:" << a <<" "<< b << endl;
  swap_data(a,b);
  cout << "�洫��:" << a <<" "<< b << endl;
  getch();
}
void swap_data(int &a,int &b)
{ int t;
  t = a;
  a = b;
  b = t;
}