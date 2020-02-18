//stru_02.cpp
#include <iostream.h>
struct rec
{ int chi,eng,math,total;
  float ave;
}Bill;			//直接定義變數
void main()
{Bill.chi=90;	//直接設定分數;
 Bill.eng=80;
 Bill.math=87;
 Bill.total=Bill.chi+Bill.eng+Bill.math;	//計算總分
 Bill.ave=Bill.total/3.0;	//求平均
 cout << "Bill的成績:";
 cout <<"\n國文="<<Bill.chi;	//輸出各欄位分數
 cout <<"\n英文="<<Bill.eng;
 cout <<"\n數學="<<Bill.math;
 cout <<"\n總分="<<Bill.total;
 cout <<"\n平均="<<Bill.ave<<"\n";
}