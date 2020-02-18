//for_no.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,sum=0,n;
  cout << "輸入任一整數n=";
  cin >> n;
  for (;a<=n;)		//若n<10則不執行
  sum +=a++;
  cout << "sum=" << sum << endl;
  getch();
}