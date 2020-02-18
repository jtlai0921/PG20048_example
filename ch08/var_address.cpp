//var_address.cpp
#include <iostream.h>
#include <conio.h>
#pragma hdrstop
#include <condefs.h>


//---------------------------------------------------------------------------
#pragma argsused
int main(int argc, char **argv)
{ short a=10,b;
  int c=15,d;
  float p=10.1, q;
  cout << "&a=" << &a << endl;
  cout << "&b=" << &b << endl;
  cout << "&c=" << &c << endl;
  cout << "&d=" << &d << endl;
  cout << "&p=" << &p << endl;
  cout << "&q=" << &q << endl;
  getch();
        return 0;
}
