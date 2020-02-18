//ptr_fun06.cpp
#include <iostream.h>		//cin,cout
#include <conio.h>      	//getch()
void get_data(int*,int*);	//prototype
void main()
{ int *a,*b;
  a = new int;					//配置記憶體
  b = new int;
  get_data(a,b);				//指標參數
  cout << "sum="<<(*a+*b)<<endl;
  getch();
}

void get_data(int *a,int *b)
{ cout << "輸入a,b=";
  cin >> *a >> *b;
}
