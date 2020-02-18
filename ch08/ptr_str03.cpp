//ptr_str03.cpp
#include <iostream.h>
#include <conio.h>
void display_str(char*);
void main()
{ char *ptr="The richest man is Bill Gates.";
  cout <<"以函數輸出:";
  display_str(ptr);	//字串指標
  getch();
}

void display_str(char *ps)
{ while (*ps)
  cout << *ps++;
}  