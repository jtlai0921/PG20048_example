//stru_fun00.cpp     	���ǻ�
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//�쫬�ŧi
int get_data(int*,int*,int*);
float get_ave(int);
void output_data(int,int,int,int,float);
void main()
{ rec Bill;
  Bill.total=get_data(&Bill.chi,&Bill.eng,&Bill.math);
  Bill.ave=get_ave(Bill.total);
  cout<<"��Ʀp�U:\n";
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
{ cout <<"���=" << a;
  cout <<"\n�^��=" << b;
  cout <<"\n�ƾ�=" << c;
  cout <<"\n�`��=" << d;
  cout <<"\n����=" << ave <<"\n";
}  
