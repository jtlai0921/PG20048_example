//date_02.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <dos.h>			//getdate(),setdate()
/********************************************/
//struct date     		內建date結構
//{ int da_year;
//  char da_day; 			需轉為整數型態
//  char da_mon;};
// void getdate(date *);	內建函數 取得日期
// void setdate(date *);	內建函數 設定日期
/*******************************************/
void main()
{ date today;
  short mon,day;
  cout <<"今天日期為:\n";
  getdate(&today); 		//取得日期
  cout << today.da_year <<" 年 "
       << (short)today.da_mon <<" 月 "
       << (short)today.da_day <<" 日\n";
  cout <<"輸入欲更改之年月日:";
  cin >> today.da_year >> mon >> day;
  today.da_mon = char(mon);  	//轉為字元
  today.da_day = char(day);
  setdate(&today);  		//設定日期
  getdate(&today);		//再取得日期
  cout <<"設定後日期為:";
  cout << today.da_year <<" 年 "
       << (short)today.da_mon <<" 月 "
       << (short)today.da_day <<" 日\n";
  getch();
}