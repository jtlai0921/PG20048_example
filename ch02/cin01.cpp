//cin01.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ float radius,area;
  const float PI = 3.14159;		//常數設定
  cout << "輸入半徑:";
  cin >> radius;
  area = PI * radius * radius;	//面積計算
  cout << "面積=" << area << endl;
  getch();	//暫停
}  