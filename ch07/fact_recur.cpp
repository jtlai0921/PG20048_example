//fact_recur.cpp
#include <iostream.h>
#include <conio.h>
int fact(int);
void main()
{ int sum,n;
  cout << "n="; cin >> n;
  sum = fact(n);
  cout << n <<"!="<< sum;
  getch();
}
int fact(int n)
{ int product=1;
  if (n>1) product = n * fact(n-1);	//�ۤv�I�s�ۤv���Ѽƭȴ�1
  return product;
}  