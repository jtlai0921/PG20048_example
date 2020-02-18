//mix_pm.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=5,b=7,c;
  cout <<"a b c\n";
  c = a-- - b-- * 2;
  cout << a <<' '<< b <<' '<< c <<endl;
  c = --a * --b ;
  cout << a <<' '<< b <<' '<< c <<endl;
  c = --a + b-- / a;
  cout << a <<' '<< b <<' '<< c <<endl;
  c = a++ + --b / a++;
  cout << a <<' '<< b <<' '<< c <<endl;
  getch();
}
