//ptr_str01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char *ptr;
  char s[]="This is a string.";
  cout << "s= " << s << endl;
  ptr = s;
  cin >> ptr;
  cout << "After input: s=" << s << endl;
  getch();
}