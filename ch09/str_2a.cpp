//str_2a.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char s[4][6]={"Black","White","Red","Green"};
  cout <<"s[4][6]�Ҧ��Ŷ�="<<sizeof(s)<<" bytes.\n";
  char *x[4]={"Black","White","Red","Green"};
  int size=4;			//4��'\0'
  for (int i=0;i<4;i++)
  size += strlen(x[i]);	//�D�U�C�r����שM
  cout <<"*x[4]�Ҧ��Ŷ�="<<size<<" bytes.\n";
  getch();
}