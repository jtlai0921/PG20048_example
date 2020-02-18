//stru_string.cpp
#include <iostream.h>
#include <conio.h>
struct rec
{ char name[20];
  int score[3],total;
  float ave;
};
void main()
{ rec Bill;
  cout << "輸入姓名:";
  cin >> Bill.name;
  Bill.score[0] = 80;
  Bill.score[1] = 90;
  Bill.score[2] = 87;
  Bill.total=0;
  for (int n=0;n<3;n++)
  Bill.total+=Bill.score[n];	//計算總分
  Bill.ave=Bill.total/3.0;	//求平均
  cout << "Bill的名字為"<<Bill.name<<"成績為\n";
  cout <<"\n國文="<<Bill.score[0];	//輸出各欄位分數
  cout <<"\n英文="<<Bill.score[1];
  cout <<"\n數學="<<Bill.score[2];
  cout <<"\n總分="<<Bill.total;
  cout <<"\n平均="<<Bill.ave<<"\n";
  getch();
}