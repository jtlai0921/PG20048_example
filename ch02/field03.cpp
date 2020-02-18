//field03.cpp    			三種進制之輸出設定
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ int i=1;
  const int f=5;						//常數設定
  cout.fill('#');   					//設定填充字元
  cout << setw(f)  					//設定輸出欄寬
       << hex << i << endl;		//輸出16進位
  cout << setw(f)
       << i*10 << endl; 			//輸出16進位
  cout << setw(f)
       << oct << i*100 << endl;	//輸出8進位
  cout << setw(f)
       << dec << i*100 << endl;	//輸出10進位
  getch();	//暫停
}
