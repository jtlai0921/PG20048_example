//ptr_aray.cpp
#include <iostream.h>
#include <conio.h>
void putstr_array(char *);
void putstr_ptr(char *);

void main()
{ char *str="This ia a books.";
  putstr_array(str);
  putstr_ptr(str);
  getch();
}

//index s as array
void putstr_array(char *s)
{ for (int i=0;s[i];i++)
  cout << s[i];
  cout << endl;
}

//Access as a pointer
void putstr_ptr(char *s)
{ while (*s)
  cout << *s++;
  cout << endl;
}