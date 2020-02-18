//mm_recur.cpp
#include <iostream.h>
#include <conio.h>
int sum_mn(int,int);
void main()
{ int m,n;
  cout << "m,n="; cin >> m >>n;
  if (m>n)
  { int t=m;
    m = n;
    n = t;
  }
  cout << m <<"到" << n <<"間和= "<< sum_mn(m,n);
  getch();
}
int sum_mn(int m,int n)
{ int s;
  if (n>m) s = n + sum_mn(m,n-1);	//自己呼叫自己但參數值減1
  else s=m;
  return s;
}