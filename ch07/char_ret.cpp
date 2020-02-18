//char_ret.cpp
#include <iostream.h>
#include <conio.h>
char get_char();
void main()
{ char ch;
  int i;
  for (i=0;i<5;i++)
  { ch= get_char();
    cout << ch <<"="<<int(ch)<<endl;
  }
  getch();
}
//get_char()
char get_char()
{ char ch;
  cout << "ch=";
  cin >> ch;
  return ch;
}
