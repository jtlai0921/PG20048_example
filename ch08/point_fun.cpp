//point_fun.cpp
#include <iostream.h>
#include <string.h>
#include <conio.h>

void check(char *,char *,
           int (*cmp) (const char *,const char *));
void main()
{ char s1[80],s2[80];
  int (*p)(const char *, const char *);
  p = strcmp;		//�r����
  cin.getline(s1,80);
  cin.getline(s2,80);
  check(s1,s2,p);
  getch();
}

void check(char *a,char *b,
           int (*cmp)(const char *,const char*))
{ if (!(*cmp)(a,b))
    cout <<"��r��۵�\n";
  else
    cout <<"��r�ꤣ�۵�\n";
 }