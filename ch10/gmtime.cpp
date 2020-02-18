//gmtime.cpp
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <iostream.h>
// Pacific Standard Time (PST) & Pacific Daylight savings Time(PDT)
//�ӥ��v�зǮɶ��P�ӥ��v����`���ɶ�
char *tzstr = "TZ=PST8PDT";
void main(void)
{
  time_t t;
  struct tm *gmt, *area;
  putenv(tzstr);	//�]�w�����ܼ�
  tzset();
  t = time(NULL);
  area = localtime(&t);
  cout <<"��a�ɶ�:"<<asctime(area);
  gmt = gmtime(&t);
  cout <<"GMT �ɶ�:"<<asctime(gmt);
  for (int i=0;i<2;i++)
  cout << _tzname[i]<<endl;
  cout << "_daylight="<<_daylight<<endl;
  cout << "_timezone="<<_timezone<<endl;
  getch();
}
