//prime.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short number,n;
  bool prime=true;
  cout << "輸入任意整數:";
  cin >> number;
  for (n=2;n<=number/2;n++)
  if (number % n ==0)
  { cout << number << " 不是質數,因可被" << n <<"除盡\n";
    prime=false;
    break;
  }
  if (prime)
  cout << number << " 是質數.\n";
  getch();
}
