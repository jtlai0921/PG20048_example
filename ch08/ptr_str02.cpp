//ptr_str02.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char *ptr="This is pointer string.";
  char s[25];
  int i;
  cout << "ptr= " << ptr << endl;
  for (i=0;i<strlen(ptr)+1; i++)
  s[i]=*(ptr+i);
  cout << "After moved : s=" << s << endl;
  getch();
}