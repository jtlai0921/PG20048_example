//leap_yn.cpp
#include <iostream.h>	//cout
#include <conio.h>	//getche()
void main()
{ int year;
  do
  {
    cout << "\nEnter year in A.D.:"; cin >> year;
    if ((year%4==0 && year%100!=0)||(year%400==0))
      cout << year << " is leap-year.\n";
    else
      cout << year << " is not leap-year.\n";
    cout << "Do it again(y/n)?";
  } while (getche()!='n');
}