//field04.cpp    			設定有效精確度
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ const int f=6; 			//設定輸出欄寬
  float pi=3.14159;
  cout << "有效精確度4位:\n";
  cout.precision(4);		//設定有效精確度
  cout << setw(f) << pi << endl;
  cout << setw(f) << pi/4 << endl;
  cout << setw(f) << pi*10*10 << endl;
  getch();	//暫停
}
