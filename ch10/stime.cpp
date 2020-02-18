//stime.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  time_t t;
  t = time(NULL);
  cout<<"目前日期:"<<ctime(&t);
  t -= 24L*60L*60L;  //設定前一天
  stime(&t);
  cout<<"新日期:"<< ctime(&t);
  getch();
}
