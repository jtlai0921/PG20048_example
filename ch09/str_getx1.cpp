//str_getx1.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=51;
void main()
{ char sentense[SIZE],ch;
  int i=0,word=1;
  cout <<"�^��y�l:";
  do
  { ch=cin.get();	//�[�W���O�ഫch=(char)cin.get();
    switch (ch)
    { case '\n':sentense[i]='\0';break;
      case ' ':word++;sentense[i++]=ch;break;
      default :sentense[i++]=ch;break;
    }
  }while (ch!='\n' || i==SIZE);
  cout << "�y�l "<< sentense << "��"
       << i <<"�Ӧr��"<< word << "�ӳ�r"
       << endl;
  getch();
}