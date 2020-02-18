//fun_01.cpp				呼叫函數執行某工作但不傳回值
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void list_line();			//prototype 函數宣告
void main()
{ for (int i=0;i<5;i++)
  list_line();			//呼叫函數
  getch();				//暫停
}
//函數定義
void list_line()
{ for (int i=0;i<5;i++)
  cout << '-';			//輸出字元'-'
  cout << endl;
}