//stru_stru01.cpp
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct base
{ char seat[3];
  char name[10];
};
struct rec
{ base basic;				//���c���
  int chi,eng,math,total;
  float ave;
};
void main()
{ rec Bill;
  cout <<"��J�y��'�m�W:";
  cin >> Bill.basic.seat >> Bill.basic.name;	//�_�����
  Bill.chi=random(100);
  Bill.eng=random(100);
  Bill.math=random(100);
  Bill.total = Bill.chi+Bill.eng+Bill.math;
  Bill.ave = Bill.total/3.0;
  cout <<"��ƿ�X:\n";
  cout <<"�y��:"<<Bill.basic.seat <<" �m�W:"<<Bill.basic.name;
  cout <<"\nchi="<<Bill.chi;
  cout <<"\neng="<<Bill.eng;
  cout <<"\nmath="<<Bill.math;
  cout <<"\ntotal="<<Bill.total;
  cout <<"\nave="<<Bill.ave;
  getch();
}
