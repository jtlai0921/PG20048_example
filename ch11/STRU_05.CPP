//stru_05.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
typedef struct
{ int chi,eng,math,total;
  float ave;
}rec;

void main()
{ rec Bill;
  cout <<"輸入國文英文數學成績:";
  cin>>Bill.chi>>Bill.eng>>Bill.math;
  Bill.total=Bill.chi+Bill.eng+Bill.math;	//計算總分
  Bill.ave=Bill.total/3.0;	//求平均
  cout << "Bill的成績:";
  cout <<"\n國文="<<Bill.chi;	//輸出各欄位分數
  cout <<"\n英文="<<Bill.eng;
  cout <<"\n數學="<<Bill.math;
  cout <<"\n總分="<<Bill.total;
  cout <<"\n平均="<<Bill.ave<<"\n";
  getch();
}