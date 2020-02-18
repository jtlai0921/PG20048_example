//str_getx.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=51;
void main()
{ char sentense[SIZE],ch;
  int i=0;
  cout <<"英文句子:";
  do
  { cin.get(ch);
    if (ch!='\n') sentense[i++]=ch;
    else sentense[i]='\0';
  }while (ch!='\n' || i==SIZE);
  cout << "句子 "<< sentense << "有"
       << i <<"個字元"<< endl;
  getch();
}