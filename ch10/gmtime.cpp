//gmtime.cpp
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <iostream.h>
// Pacific Standard Time (PST) & Pacific Daylight savings Time(PDT)
//太平洋標準時間與太平洋日光節約時間
char *tzstr = "TZ=PST8PDT";
void main(void)
{
  time_t t;
  struct tm *gmt, *area;
  putenv(tzstr);	//設定環境變數
  tzset();
  t = time(NULL);
  area = localtime(&t);
  cout <<"當地時間:"<<asctime(area);
  gmt = gmtime(&t);
  cout <<"GMT 時間:"<<asctime(gmt);
  for (int i=0;i<2;i++)
  cout << _tzname[i]<<endl;
  cout << "_daylight="<<_daylight<<endl;
  cout << "_timezone="<<_timezone<<endl;
  getch();
}
