//field06.cpp    			設定向左對齊
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ const int f=10;   		//設定輸出欄寬
  char ch='A';
  cout << "向左對齊:\n";
  cout.setf(ios::left,ios::adjustfield);
  cout << setw(f) << ch << setw(f) << "柯林頓" << endl;
  cout << setw(f) << "字母" << setw(f) << "Clinton" << endl;
  cout << setw(f) << "李連宋" << setw(f) << "政治生態" << endl;
  getch();	//暫停
}
