//str_len.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char st[]="Normal distribution";			//�r��
  char *s="It is a nice homework";
  char str[]={'T','A','I','W','A','N','\0'};
  cout<<"�U�r����׬�:\n";
  cout <<st<<"= "<<strlen(st)<<" �r��\n";
  cout <<s<<"= "<<strlen(s)<<" �r��\n";
  cout <<str<<"= "<<strlen(str)<<" �r��\n";
  getch();
}