//date_01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <dos.h>			//getdate(),setdate()
/********************************************/
//struct date     		����date���c
//{ int da_year;
//  char da_day; 			���ର��ƫ��A
//  char da_mon;};
// void getdate(date *);	���ب��
/*******************************************/
void main()
{ date today;
  cout <<"���Ѥ����:\n";
  getdate(&today);
  cout << today.da_year <<" �~ "
       << (short)today.da_mon <<" �� "
       << (short)today.da_day <<" ��\n";
  getch();
}