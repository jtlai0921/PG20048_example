//str_getx.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=51;
void main()
{ char sentense[SIZE],ch;
  int i=0;
  cout <<"�^��y�l:";
  do
  { cin.get(ch);
    if (ch!='\n') sentense[i++]=ch;
    else sentense[i]='\0';
  }while (ch!='\n' || i==SIZE);
  cout << "�y�l "<< sentense << "��"
       << i <<"�Ӧr��"<< endl;
  getch();
}