//stru_fun00.cpp     	欄位傳遞
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//原型宣告
int get_data(int*,int*,int*);
float get_ave(int);
void output_data(int,int,int,int,float);
void main()
{ rec Bill;
  Bill.total=get_data(&Bill.chi,&Bill.eng,&Bill.math);
  Bill.ave=get_ave(Bill.total);
  cout<<"資料如下:\n";
  output_data(Bill.chi,Bill.eng,Bill.math,Bill.total,Bill.ave);
  getch();
}
//get_data
int get_data(int *a,int*b,int*c)
{ *a = random(101);
  *b = random(101);
  *c = random(101);
  return (*a+*b+*c);
}
//get_ave
float get_ave(int score)
{ return score/ 3.0; }
//output_data
void output_data(int a,int b, int c,int d, float ave)
{ cout <<"國文=" << a;
  cout <<"\n英文=" << b;
  cout <<"\n數學=" << c;
  cout <<"\n總分=" << d;
  cout <<"\n平均=" << ave <<"\n";
}  
