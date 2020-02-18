//ptr_fun01.cpp
#include <iostream.h>
#include <conio.h>
void get_data(int*,int*);
void main()
{ int a,b,sum;
  get_data(&a,&b);
  sum = a + b;
  cout << "sum=" << sum << endl;
  getch();
}
void get_data(int *a,int *b)
{ cout << "¿é¤Ja,b=";
  cin >> *a >> *b;
}