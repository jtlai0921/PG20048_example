//str_lwr.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char st[]="Normal Distribution";			//�r��
  char str[]={'T','A','I','W','A','N','\0'};
  char *string = "abcdefghijklmnopqrstuvwxyz", *ptr;

   /* converts string to upper case characters */
  cout<<string<<"=>";
  ptr = strupr(string);	//�Ǧ^�r�����
  cout<<ptr<<endl;
  cout <<st<<"=>";
  strupr(st);				//�Hst�Ǧ^
  cout <<st<<endl;
  cout <<str<<"=>";
  ptr = strlwr(str);		//�ର�p�g
  cout <<ptr;
  getch();
}