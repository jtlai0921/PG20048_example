//for_no.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,sum=0,n;
  cout << "��J���@���n=";
  cin >> n;
  for (;a<=n;)		//�Yn<10�h������
  sum +=a++;
  cout << "sum=" << sum << endl;
  getch();
}