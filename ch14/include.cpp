//include.cpp
#include <iostream.h>
#include <conio.h>
#include "myhead.h"
void main()
{ int n;
  cout << "n=";
  cin >> n;
  if (n > MAX)
    cout<< n<<"大於"<<MAX;
  else if (n<MIN)
    cout << n<<"小於"<<MIN;
  else
    cout << n <<"介於"<<MAX<<"與"<<MIN<<"間";
  getch();
}