//stru_fun02.cpp     	指標對指標
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//原型宣告
void get_data(rec*);
void output_data(rec*);
void main()
{ rec *Bill;
  Bill=new rec;
  get_data(Bill);
  cout<<"資料如下:\n";
  output_data(Bill);
  delete Bill;
  getch();
}
//get_data
void get_data(rec *a)//指標接收
{ a->chi = random(101);
  a->eng = random(101);
  a->math = random(101);
  a->total = a->chi + a->eng + a->math;
  a->ave = a->total / 3.0;
}
//output_data
void output_data(rec *a)//指標接收
{ cout <<"國文=" << a->chi;
  cout <<"\n英文=" << a->eng;
  cout <<"\n數學=" << a->math;
  cout <<"\n總分=" << a->total;
  cout <<"\n平均=" << a->ave <<"\n";
}  
