//fun_value.cpp         以數值傳資料
#include <iostream.h> //cout
#include <conio.h>	//getch()
void add(int, int);	//prototype of function
void main()
{
   add(10,20);			//兩數值參數
   getch();
}
 //function show the sum
 void add(int a, int b)
 { cout << a << "+" << b << "=" << (a + b) << endl;
 }
