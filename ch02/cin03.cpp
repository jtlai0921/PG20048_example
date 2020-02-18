//cin03.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ int a,b;
  cout << "輸入16進位a,b=";      //輸入如 0xa 0xb
  cin >> a >> b;
  cout << "hex a+b=" << hex << "0x" << (a+b) << endl;
  cout << "輸入8 進位a,b=";      //輸入如 07 03
  cin >> a >> b;
  cout << "oct a+b=" << oct << "0" << (a+b) << endl;
  getch(); 	//暫停
}