//str_icmp.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *buf1 = "BBB", *buf2 = "bbb";
  int ptr;
  ptr = stricmp(buf2, buf1);
  if (ptr > 0)
     cout<<"buffer 2 �j�� buffer 1\n";
  if (ptr < 0)
     cout<<"buffer 2 �p�� buffer 1\n";
  if (ptr == 0)
     cout<<"buffer 2 ���� buffer 1\n";
  getch();
}