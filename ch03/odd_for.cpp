//odd_for.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int sum = 0, i;
  cout << "  i   sum\n";
  for (i=1;i<=10;i=i+2)
  { sum += i;
    cout.width(3); cout << i;
    cout.width(5); cout << sum << endl;
  }
  cout << "1+3+5+..+9=" << sum << endl;
  getch();
}  