//date_02.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <dos.h>			//getdate(),setdate()
/********************************************/
//struct date     		����date���c
//{ int da_year;
//  char da_day; 			���ର��ƫ��A
//  char da_mon;};
// void getdate(date *);	���ب�� ���o���
// void setdate(date *);	���ب�� �]�w���
/*******************************************/
void main()
{ date today;
  short mon,day;
  cout <<"���Ѥ����:\n";
  getdate(&today); 		//���o���
  cout << today.da_year <<" �~ "
       << (short)today.da_mon <<" �� "
       << (short)today.da_day <<" ��\n";
  cout <<"��J����蠟�~���:";
  cin >> today.da_year >> mon >> day;
  today.da_mon = char(mon);  	//�ର�r��
  today.da_day = char(day);
  setdate(&today);  		//�]�w���
  getdate(&today);		//�A���o���
  cout <<"�]�w������:";
  cout << today.da_year <<" �~ "
       << (short)today.da_mon <<" �� "
       << (short)today.da_day <<" ��\n";
  getch();
}