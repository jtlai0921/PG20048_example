//strtime.cpp
#include <time.h>
#include <iostream.h>
#include <conio.h>
void main(void)
{
  char datebuf[9];
  char timebuf[9];
  _strdate(datebuf);
  _strtime(timebuf);
  cout<<"�ثe���:"<<datebuf<<endl
      <<"�{�b�ɨ�:"<<timebuf<<endl;
  getch();
}