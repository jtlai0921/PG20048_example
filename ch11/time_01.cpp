//time_01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <iomanip.h>		//setw()
#include <time.h>			//time(),ctime(),localtime(),asctime()

//prototype
void output_time(tm *);

void main()
{	tm *today;				//tm之結構指標變數
   time_t n;
   n = time(NULL);		//取得目前時間之秒數
   cout <<"以ctime()轉為時間日期格式:\n";
   cout << ctime(&n);
   today = localtime(&n);	//轉為tm結構格式
   //輸出tm各欄位資料
   output_time(today);
   cout <<"\n再以asctime()輸出時間日期格式:\n";
   cout << asctime(today);
   getch();
}
//output_time
void output_time(tm *t)
{ cout <<"\ntm結構各欄位資料如下:";
  cout <<"\ntm_sec  ="<<setw(4)<< t->tm_sec<<" 秒";
  cout <<"\ntm_min  ="<<setw(4)<< t->tm_min<<" 分";
  cout <<"\ntm_hour ="<<setw(4)<< t->tm_hour<<" 時";
  cout <<"\ntm_mday ="<<setw(4)<< t->tm_mday<<" 日";
  cout <<"\ntm_mon  ="<<setw(4)<< t->tm_mon<<" 月";
  cout <<"\ntm_year ="<<setw(4)<< t->tm_year<<" 年";
  cout <<"\ntm_wday ="<<setw(4)<< t->tm_wday<<" 星期";
  cout <<"\ntm_yday ="<<setw(4)<< t->tm_yday<<" 日數";
  cout <<"\ntm_isdst="<<setw(4)<< t->tm_isdst<<" 日光節約\n";
}
