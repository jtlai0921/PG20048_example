//ptr_str03.cpp
#include <iostream.h>
#include <conio.h>
void display_str(char*);
void main()
{ char *ptr="The richest man is Bill Gates.";
  cout <<"�H��ƿ�X:";
  display_str(ptr);	//�r�����
  getch();
}

void display_str(char *ps)
{ while (*ps)
  cout << *ps++;
}  