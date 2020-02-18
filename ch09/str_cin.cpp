//str_cin.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=20;
void main()
{ char name[SIZE],sport[SIZE];
  cout <<"輸入姓名:";
  cin >> name;
  cout <<"喜好運動名:";
  cin >> sport;

  cout <<"\n"<< name <<" ,你的運動"<<sport<<"我也很喜歡\n";
  getch();
}