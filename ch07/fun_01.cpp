//fun_01.cpp
//函數接受參數處理後以 return 傳回資料
#include <iostream.h>	//cout
#include <conio.h>		//getch()
int add(int, int);		//prototype of function
void main()
{ int a=10,b=20;
  cout << a << "+" << b << "="
       << add(a,b);
  getch();
}
//function add two data
int add(int a, int b)
{ return (a+b);
}

