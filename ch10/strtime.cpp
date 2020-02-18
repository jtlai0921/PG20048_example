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
  cout<<"目前日期:"<<datebuf<<endl
      <<"現在時刻:"<<timebuf<<endl;
  getch();
}