//toascii.cpp
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
  int c;
  cout << "��J���@�Ʀr:";
  cin >> c;
  cout << "Hex="<<hex<<c<<dec<<endl;

  cout << "ASCII:"<<toascii(c)<<"="<<char(toascii(c))<<endl;
  getch();
}
