//atof.cpp
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  float f;
  int integer;
  char *str = "12345.67";
  f = atof(str);
  cout<<"�r��"<<str<<"�ର"<<f<<"���ƭ�\n";
  integer = atoi(str);
  cout<<"�r��"<<str<<"�ର"<<integer<<"����ƭ�\n";
  char *st="1.2E+13";
  f = atof(st);
  cout<<"�r��"<<st<<"�ର"<<f<<"���ƭ�\n";
  char *ss="12.S11";
  f = atof(ss);
  cout<<"�r��"<<ss<<"�ର"<<f<<"���ƭ�";
  getch();
}