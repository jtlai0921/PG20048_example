//stru_fun02.cpp     	���й����
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
//�쫬�ŧi
void get_data(rec*);
void output_data(rec*);
void main()
{ rec *Bill;
  Bill=new rec;
  get_data(Bill);
  cout<<"��Ʀp�U:\n";
  output_data(Bill);
  delete Bill;
  getch();
}
//get_data
void get_data(rec *a)//���б���
{ a->chi = random(101);
  a->eng = random(101);
  a->math = random(101);
  a->total = a->chi + a->eng + a->math;
  a->ave = a->total / 3.0;
}
//output_data
void output_data(rec *a)//���б���
{ cout <<"���=" << a->chi;
  cout <<"\n�^��=" << a->eng;
  cout <<"\n�ƾ�=" << a->math;
  cout <<"\n�`��=" << a->total;
  cout <<"\n����=" << a->ave <<"\n";
}  
