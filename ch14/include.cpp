//include.cpp
#include <iostream.h>
#include <conio.h>
#include "myhead.h"
void main()
{ int n;
  cout << "n=";
  cin >> n;
  if (n > MAX)
    cout<< n<<"�j��"<<MAX;
  else if (n<MIN)
    cout << n<<"�p��"<<MIN;
  else
    cout << n <<"����"<<MAX<<"�P"<<MIN<<"��";
  getch();
}