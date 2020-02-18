//hexoct.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short chest =42;		//十進位常數
  short waist = 0x42;	//十六進位常數
  short other = 042;		//八進位常數

  cout << "chest=" << chest << endl;   //皆為10進位輸出
  cout << "waist=" << waist << endl;
  cout << "other=" << other << endl;
  getch();
}