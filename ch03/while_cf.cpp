//while_CF.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ double c=20,f;
  cout << "  C     F\n";
  cout.setf(ios::showpoint);	//顯示小數點
  cout.setf(ios::fixed,ios::floatfield);	//先清小數欄位再設定點小數
  cout.precision(1);		//一位小數
  while (c<=25.0)
  { f = 9.0/5.0*c + 32.0;		//攝氏轉華氏公式
    cout.width(5); cout << c;	//設欄寬並輸出
    cout.width(6); cout << f << endl;
    c++;								//改變條件之敘述
  }
  getch();
}