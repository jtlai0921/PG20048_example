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
  cout<<"��1/1/1970 GMT��"<<ctime(&t.time)<<"�����:"<< t.time;
  cout<<"\n�d������:"<< t.millitm;
  cout<<"\n��a�ɶ��PGMT���t:"<< t.timezone;
  cout<<"\n����`��(1),�L(0):"<< t.dstflag;
  getch();
}
