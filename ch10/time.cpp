//time.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  time_t t;
  t = time(NULL);	//取得目前日期時間
  cout <<"自1970年1月1日至"<<ctime(&t)<<"共有:"<< t <<"秒";
  getch();
}