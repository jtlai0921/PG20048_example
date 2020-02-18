//if_01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a;
  cout << "輸入任一負數a=";
  cin >> a;
  if (a<0)
  a=-a;
  cout <<"正數為 " << a << endl;
  getch();
}