//pub_set_sum.cpp
#include <iostream.h>
#include <conio.h>
void sum();
void set();
int a,b;		//公用變數
void main()
{set();		//呼叫函數
 sum(); 		//呼叫函數
 getch();
}
//set()
void set()
{ a=10;
  b=20;
}
//sum()
void sum()
{ cout << "a+b="<<(a+b)<<endl;
}