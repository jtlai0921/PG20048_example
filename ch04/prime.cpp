//prime.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short number,n;
  bool prime=true;
  cout << "��J���N���:";
  cin >> number;
  for (n=2;n<=number/2;n++)
  if (number % n ==0)
  { cout << number << " ���O���,�]�i�Q" << n <<"����\n";
    prime=false;
    break;
  }
  if (prime)
  cout << number << " �O���.\n";
  getch();
}
