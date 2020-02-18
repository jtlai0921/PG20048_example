//stru_stru01.cpp
#include <iostream.h>	//cin,cout
#include <stdlib.h>		//random()
#include <conio.h>		//getch()
struct base
{ char seat[3];
  char name[10];
};
struct rec
{ base basic;				//結構欄位
  int chi,eng,math,total;
  float ave;
};
void main()
{ rec Bill;
  cout <<"輸入座號'姓名:";
  cin >> Bill.basic.seat >> Bill.basic.name;	//巢狀欄位
  Bill.chi=random(100);
  Bill.eng=random(100);
  Bill.math=random(100);
  Bill.total = Bill.chi+Bill.eng+Bill.math;
  Bill.ave = Bill.total/3.0;
  cout <<"資料輸出:\n";
  cout <<"座號:"<<Bill.basic.seat <<" 姓名:"<<Bill.basic.name;
  cout <<"\nchi="<<Bill.chi;
  cout <<"\neng="<<Bill.eng;
  cout <<"\nmath="<<Bill.math;
  cout <<"\ntotal="<<Bill.total;
  cout <<"\nave="<<Bill.ave;
  getch();
}
