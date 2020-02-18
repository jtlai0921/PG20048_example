//do_fact.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int fact = 1;			//階乘值
  short n,i=1;				//i為控制變數
  cout << "輸入一正整數(<=10):";
  cin >> n;					//取得輸入值
  do
    fact = fact * i++;	//在敘述中改變條件
  while (i<=n);
  cout << n << "!=" << fact << endl;
  getch();
}  