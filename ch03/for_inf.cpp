//for_inf.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int sum=0,n;
  for (;;)					//�ì��u���j��
  { cout << "n="; cin >> n;
    sum +=n;
    if (n==0) break;		//��J0�~�|����
  }
  cout << "sum=" << sum << endl;
  getch();
}