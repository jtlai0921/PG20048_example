//ftime.cpp
#include <iostream.h>
#include <stdlib.h>
#include <time.h>
#include <sys\timeb.h>
#include <conio.h>
/* pacific standard & daylight savings */
char *tzstr = "TZ=PST8PDT";
void main(void)
{
  struct timeb t;
  putenv(tzstr);
  tzset();
  ftime(&t);
  cout<<"自1/1/1970 GMT到"<<ctime(&t.time)<<"之秒數:"<< t.time;
  cout<<"\n千分之秒:"<< t.millitm;
  cout<<"\n當地時間與GMT之差:"<< t.timezone;
  cout<<"\n日光節約(1),無(0):"<< t.dstflag;
  getch();
}
