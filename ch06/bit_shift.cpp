//bit_shift.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=17,b=20,c;
  c= a << 2;
  cout << " 17 << 2=" << c ;
  cout << " Hex=" << hex << c <<endl;
  c = b >> 3;
  cout << " 20 >> 3=" << dec << c;
  cout << " Hex=" << hex << c << endl;
  getch();
}
