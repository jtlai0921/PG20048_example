//int_f_char.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char ch;
  int a,b;
  float x,y;
  cout <<"��J�r��ch,���a,b�β��I��x=";
  cin >> ch >> a >> b >> x;
  y = 4 * a * x + b;
  cout << "ch=" << ch << endl;
  cout << "y=" << y << endl;
  cout <<"��J���a,b,�r��ch�β��I��x=";
  cin >>  a >> b >> ch >> x;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << "ch=" << ch << endl;
  cout << "x=" << x << endl;
  getch();
}
