//fun_02.cpp				呼叫函數執行某工作但傳回值
#include <iostream.h>	//cout
#include <conio.h>		//getch()
int get_data();			//prototype 函數宣告
void main()
{ int max=0;
  for (int i=0;i<5;i++)	//i,t兩變數只在for迴圈內有用
  { int t=get_data();   //呼叫函數傳回一整數值
    max=(t > max) ? t : max;
  }
  cout << "\n最大值為:"<< max <<endl;
  getch();					//暫停
}
//函數定義
int get_data()
{ int data;
  cout << "輸入任意整數: ";
  cin >> data;
  return data;
}