//field01.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int i=1;
  cout.fill('*');	//設定填充字元
  cout.width(5);	//設定輸出欄寬
  cout << i << endl;
  cout.width(5);cout << i*10 << endl;
  cout.width(5);cout << i*100 << endl;
  getch();
}
