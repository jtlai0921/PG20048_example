//toascii.cpp
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
void main(void)
{
  int c;
  cout << "輸入任一數字:";
  cin >> c;
  cout << "Hex="<<hex<<c<<dec<<endl;

  cout << "ASCII:"<<toascii(c)<<"="<<char(toascii(c))<<endl;
  getch();
}
