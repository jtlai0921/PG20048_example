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
  cout<<"字串"<<str<<"轉為"<<f<<"之數值\n";
  integer = atoi(str);
  cout<<"字串"<<str<<"轉為"<<integer<<"之整數值\n";
  char *st="1.2E+13";
  f = atof(st);
  cout<<"字串"<<st<<"轉為"<<f<<"之數值\n";
  char *ss="12.S11";
  f = atof(ss);
  cout<<"字串"<<ss<<"轉為"<<f<<"之數值";
  getch();
}