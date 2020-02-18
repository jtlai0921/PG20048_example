//fact_fun.cpp
#include <iostream.h>
#include <conio.h>
int fact(int );
void main()
{ int sum,n;
  cout << "n="; cin >> n;
  sum = fact(n);
  cout << n <<"!="<< sum;
  getch();
}
int fact(int n)
{ int i=1,product=1;
  for (;i<=n;i++)
  product *= i;
  return product;
}  