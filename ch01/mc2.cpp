//mc2.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ float mass,e,C;
  C = 3e8; 					//光速 m/sec
  mass = 50 * 0.1/100;
  e = mass * C * C;     //e=mc2 質能互換公式
  cout << "質量損失=" << e << "焦耳\n";
  getch();
}   