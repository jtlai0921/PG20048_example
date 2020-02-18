//str_getx1.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=51;
void main()
{ char sentense[SIZE],ch;
  int i=0,word=1;
  cout <<"英文句子:";
  do
  { ch=cin.get();	//加上型別轉換ch=(char)cin.get();
    switch (ch)
    { case '\n':sentense[i]='\0';break;
      case ' ':word++;sentense[i++]=ch;break;
      default :sentense[i++]=ch;break;
    }
  }while (ch!='\n' || i==SIZE);
  cout << "句子 "<< sentense << "有"
       << i <<"個字元"<< word << "個單字"
       << endl;
  getch();
}