//mktime.cpp
#include <time.h>
#include <conio.h>
#include <iostream.h>
char *wday[] = {"�P����", "�P���@", "�P���G", "�P���T",
  "�P���|", "�P����", "�P����", "�����D"};

void main(void)
{
    struct tm time_check;
    int year, month, day;
    time_t t;
    cout<<"��J�褸�~,��,��:";
    cin>>year>>month>>day;
    /*��J���c*/
    time_check.tm_year = year - 1900;
    time_check.tm_mon  = month - 1;
    time_check.tm_mday = day;
    time_check.tm_hour = 0;
    time_check.tm_min  = 0;
    time_check.tm_sec  = 1;
    time_check.tm_isdst = -1;
/*  �]�wtm���c */
    t = mktime(&time_check);
    if (t == -1)
       time_check.tm_wday = 7;
    else cout <<"�]�w�ɶ���:"<< ctime(&t);
/*  ��X�P�� */
    cout<<"\n�Ӥ鬰:"<<wday[time_check.tm_wday];
  getch();
}
