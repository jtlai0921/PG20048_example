//field07.cpp    			設定科學記號
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ double sec;
  int secl;
  cout.setf(ios::scientific,ios::floatfield);	//設定科學浮號
  secl = 365 * 24 * 60 * 60;	//一年秒數
  sec = secl;						//轉為double
  cout << sec << endl;			//輸出科學符號 3.153600e+07
  cout.setf(ios::hex,ios::basefield);	//輸出16進位
  cout.setf(ios::showbase);				//輸出基底0X
  cout.setf(ios::uppercase);				//以大寫輸出
  cout << secl << endl;                //0X1E13880
  cout.setf(ios::oct,ios::basefield);	//輸出8進位,基底0開頭
  cout << secl << endl;						//0170231600					
  getch();	//暫停
}
