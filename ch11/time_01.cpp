//time_01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <iomanip.h>		//setw()
#include <time.h>			//time(),ctime(),localtime(),asctime()

//prototype
void output_time(tm *);

void main()
{	tm *today;				//tm�����c�����ܼ�
   time_t n;
   n = time(NULL);		//���o�ثe�ɶ������
   cout <<"�Hctime()�ର�ɶ�����榡:\n";
   cout << ctime(&n);
   today = localtime(&n);	//�ରtm���c�榡
   //��Xtm�U�����
   output_time(today);
   cout <<"\n�A�Hasctime()��X�ɶ�����榡:\n";
   cout << asctime(today);
   getch();
}
//output_time
void output_time(tm *t)
{ cout <<"\ntm���c�U����Ʀp�U:";
  cout <<"\ntm_sec  ="<<setw(4)<< t->tm_sec<<" ��";
  cout <<"\ntm_min  ="<<setw(4)<< t->tm_min<<" ��";
  cout <<"\ntm_hour ="<<setw(4)<< t->tm_hour<<" ��";
  cout <<"\ntm_mday ="<<setw(4)<< t->tm_mday<<" ��";
  cout <<"\ntm_mon  ="<<setw(4)<< t->tm_mon<<" ��";
  cout <<"\ntm_year ="<<setw(4)<< t->tm_year<<" �~";
  cout <<"\ntm_wday ="<<setw(4)<< t->tm_wday<<" �P��";
  cout <<"\ntm_yday ="<<setw(4)<< t->tm_yday<<" ���";
  cout <<"\ntm_isdst="<<setw(4)<< t->tm_isdst<<" ����`��\n";
}
