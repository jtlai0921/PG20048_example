//str_cmp1.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *buf1 = "aaabbb", *buf2 = "bbbccc", *buf3 = "ccc";
   int ptr;

   ptr = strncmp(buf2,buf1,3);	//比較前三字元
   if (ptr > 0)
      cout<<"buffer 2 大於 buffer 1\n";
   else
      cout<<"buffer 2 小於 buffer 1\n";

   ptr = strncmp(buf2,buf3,3);
   if (ptr > 0)
      cout<<"buffer 2 大於 buffer 3\n";
   else
      cout<<"buffer 2 小於 buffer 3\n";
  getch();
}