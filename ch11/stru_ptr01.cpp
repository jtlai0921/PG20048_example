//stru_ptr01.cpp
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//原型宣告
void main()
{ rec *Bill,a;
  Bill= &a;						//指向已存在之結構
  Bill->chi = random(100); //產生亂數分數64,78,40,164,54.6667
  (*Bill).eng = random(100);//另一種指標方式
  Bill->math = random(100);
  Bill->total=Bill->chi + Bill->eng + Bill->math;
  Bill->ave = Bill->total /3.0;//平均
  cout <<"Bill的成績:";
  cout <<"\n國文=" << a.chi;	//輸出各欄位分數
  cout <<"\n英文=" << Bill->eng;
  cout <<"\n數學=" << Bill->math;
  cout <<"\n總分=" << a.total;
  cout <<"\n平均=" << Bill->ave <<"\n";
  getch();
}
