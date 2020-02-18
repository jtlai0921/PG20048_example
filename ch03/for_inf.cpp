//for_inf.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int sum=0,n;
  for (;;)					//永為真之迴圈
  { cout << "n="; cin >> n;
    sum +=n;
    if (n==0) break;		//輸入0才會結束
  }
  cout << "sum=" << sum << endl;
  getch();
}