//stru_ptr02.cpp
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//原型宣告
void main()
{ rec *Bill;
  Bill= new rec;				//配置記憶體
  Bill->chi = random(100); //產生亂數分數64,78,40,164,54.6667
  (*Bill).eng = random(100);//另一種指標方式
  Bill->math = random(100);
  Bill->total=Bill->chi + Bill->eng + Bill->math;
  Bill->ave = Bill->total /3.0;//平均
  cout <<"Bill的成績:";
  cout <<"\n國文=" << Bill->chi;	//輸出各欄位分數
  cout <<"\n英文=" << Bill->eng;
  cout <<"\n數學=" << Bill->math;
  cout <<"\n總分=" << Bill->total;
  cout <<"\n平均=" << Bill->ave <<"\n";
  delete Bill;						//釋放記憶體
  getch();
}
