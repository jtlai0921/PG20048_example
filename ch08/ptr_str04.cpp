//ptr_str04.cpp
#include <iostream.h>
#include <conio.h>
void display_str(char*,char*);	//�쫬�ŧi
void main()
{ char *ptr="This is pointer string.";
  char s[]="The most powerful man is Bill Clinton.";
  cout <<"��X��Ƭ�:\n";
  display_str(ptr,s);
  getch();
}

void display_str(char *p,char *q)
{ cout << p <<"�r�꦳:"<<strlen(p)<<"�r��\n";
  cout << q <<"�r�꦳:"<<strlen(q)<<"�r��\n";
}
