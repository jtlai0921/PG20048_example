//mktime.cpp
#include <time.h>
#include <conio.h>
#include <iostream.h>
char *wday[] = {"星期日", "星期一", "星期二", "星期三",
  "星期四", "星期五", "星期六", "不知道"};

void main(void)
{
    struct tm time_check;
    int year, month, day;
    time_t t;
    cout<<"輸入西元年,月,日:";
    cin>>year>>month>>day;
    /*填入結構*/
    time_check.tm_year = year - 1900;
    time_check.tm_mon  = month - 1;
    time_check.tm_mday = day;
    time_check.tm_hour = 0;
    time_check.tm_min  = 0;
    time_check.tm_sec  = 1;
    time_check.tm_isdst = -1;
/*  設定tm結構 */
    t = mktime(&time_check);
    if (t == -1)
       time_check.tm_wday = 7;
    else cout <<"設定時間為:"<< ctime(&t);
/*  輸出星期 */
    cout<<"\n該日為:"<<wday[time_check.tm_wday];
  getch();
}
