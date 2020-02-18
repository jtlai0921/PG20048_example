//stru_04.cpp
#include <iostream.h>
void main()
{ struct rec 				//函數內定義結構
  { int chi,eng,math,total;
	 float ave;
  }Bill={90,80,87,0,0};//直接定義變數及欄位常數

 Bill.total=Bill.chi+Bill.eng+Bill.math;	//計算總分
 Bill.ave=Bill.total/3.0;	//求平均
 cout << "Bill的成績:";
 cout <<"\n國文="<<Bill.chi;	//輸出各欄位分數
 cout <<"\n英文="<<Bill.eng;
 cout <<"\n數學="<<Bill.math;
 cout <<"\n總分="<<Bill.total;
 cout <<"\n平均="<<Bill.ave<<"\n";
}