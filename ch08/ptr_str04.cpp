//ptr_str04.cpp
#include <iostream.h>
#include <conio.h>
void display_str(char*,char*);	//原型宣告
void main()
{ char *ptr="This is pointer string.";
  char s[]="The most powerful man is Bill Clinton.";
  cout <<"輸出資料為:\n";
  display_str(ptr,s);
  getch();
}

void display_str(char *p,char *q)
{ cout << p <<"字串有:"<<strlen(p)<<"字元\n";
  cout << q <<"字串有:"<<strlen(q)<<"字元\n";
}
