//cin05.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ double velocity,distance;
  cout << "光速(m/sec): ";	//以科學指數輸入3e8
  cin >> velocity;
  distance=velocity*365*24*60*60/1000;	//一年之距離(公里)
  cout << "一光年之距離為 " << distance << " 公里\n";	//9.4608e+12
  getch(); 	//暫停
}