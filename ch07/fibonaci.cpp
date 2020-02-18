//fibonaci.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ void fibonaci(int,int&);//函數原型
  int numbers,result;
  cout << "輸入欲找之費氏項數:" ;
  cin >> numbers;
  fibonaci(numbers,result);	//函數呼叫
  cout <<"費氏數列第 "<<numbers <<"項值為 "
       << result<<endl;
  getch();
}

void fibonaci(int n, int &value)	//函數
{ int first=0,second=1,count=3;
  if (n==1) value=first;
  if (n==2) value=second;
  while (count<=n)
  { value = first + second;		//後一項為前兩項之和
    first = second;
    second = value;
    count++;
  }
}

