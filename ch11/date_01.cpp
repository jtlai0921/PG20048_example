//date_01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <dos.h>			//getdate(),setdate()
/********************************************/
//struct date     		內建date結構
//{ int da_year;
//  char da_day; 			需轉為整數型態
//  char da_mon;};
// void getdate(date *);	內建函數
/*******************************************/
void main()
{ date today;
  cout <<"今天日期為:\n";
  getdate(&today);
  cout << today.da_year <<" 年 "
       << (short)today.da_mon <<" 月 "
       << (short)today.da_day <<" 日\n";
  getch();
}