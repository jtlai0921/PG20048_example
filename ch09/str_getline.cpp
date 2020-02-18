//str_getline.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=21;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"輸入姓名:";
  cin.getline(name,20);
  cout <<"喜好運動名:";
  cin.getline(sport,20);

  cout <<name <<" ,你的運動"<<sport<<"我也很喜歡\n";
  getch();
}