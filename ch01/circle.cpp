//circle.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ float radius, area, periphery;
  radius = 12.15;							//設半徑值
  area = 3.14159 * radius * radius;	//求圓面積
  periphery = 4 * 3.14159 * radius;	//求周長
  cout << "圓面積=" << area << endl;
  cout << "圓周長=" << periphery << endl;
  getch();					//暫停
}