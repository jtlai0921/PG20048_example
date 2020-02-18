//str_lenu.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ unsigned int i=0,len=0;
  char str[]="中華民國台灣省";
  char *string="Yellow River";

  while (str[i++]!='\0')
  len++;
  cout<<str<<":有 "<<len/2<<" 個中文字\n";

  i=len=0;
  do len++; while (string[i++]!='\0');
  cout <<string<<":有"<<len<<"字元\n";
  getch();
}