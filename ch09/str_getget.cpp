//str_getget.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=21;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"輸入姓名:";
  cin.get(name,SIZE);//此兩列可合併為cin.get(name,SIZE).get();
  cin.get();
  cout <<"喜好運動名:";
  cin.get(sport,SIZE).get();

  cout <<"\n"<<name <<" ,你的運動"<<sport<<"我也很喜歡\n";
  getch();
}