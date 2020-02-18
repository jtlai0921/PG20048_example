//str_get.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=21;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"輸入姓名:";
  cin.get(name,20);
  cout <<"喜好運動名:";
  cin.get(sport,20);

  cout <<"\n"<<name <<" ,你的運動"<<sport<<"我也很喜歡\n";
  getch();
}