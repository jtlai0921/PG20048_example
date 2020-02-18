//pub_sum.cpp
#include <iostream.h>
#include <conio.h>
void sum();
int a,b;		//公用變數
void main()
{a=10;
 b=20;
 sum(); 		//呼叫函數
 getch();
}
//sum()
void sum()
{ cout << "a+b="<<(a+b)<<endl;
}