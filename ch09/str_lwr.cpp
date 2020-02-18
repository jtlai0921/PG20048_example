//str_lwr.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char st[]="Normal Distribution";			//字串
  char str[]={'T','A','I','W','A','N','\0'};
  char *string = "abcdefghijklmnopqrstuvwxyz", *ptr;

   /* converts string to upper case characters */
  cout<<string<<"=>";
  ptr = strupr(string);	//傳回字串指標
  cout<<ptr<<endl;
  cout <<st<<"=>";
  strupr(st);				//以st傳回
  cout <<st<<endl;
  cout <<str<<"=>";
  ptr = strlwr(str);		//轉為小寫
  cout <<ptr;
  getch();
}