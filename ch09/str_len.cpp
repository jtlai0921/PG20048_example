//str_len.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char st[]="Normal distribution";			//字串
  char *s="It is a nice homework";
  char str[]={'T','A','I','W','A','N','\0'};
  cout<<"各字串長度為:\n";
  cout <<st<<"= "<<strlen(st)<<" 字元\n";
  cout <<s<<"= "<<strlen(s)<<" 字元\n";
  cout <<str<<"= "<<strlen(str)<<" 字元\n";
  getch();
}