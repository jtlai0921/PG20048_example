//field02.cpp    			使用運作子<iomanip.h>包含檔
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ int i=1;
  cout.fill('#');   //設定填充字元
  cout << setw(5)   //設定輸出欄寬
       << i << endl;
  cout << setw(5)
       << i*10 << endl;
  cout << setw(5)
       <<i*100 << endl;
  getch();
}
