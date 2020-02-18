//field05.cpp    			砞﹚计计
#include <iostream.h>	//cout
#include <iomanip.h>		//setw
#include <conio.h>		//getch()
void main()
{ const int f=6; 			//砞﹚块逆糴
  float pi=3.14159;
  cout << "计计2,逆糴"<< f << " 计翴" << endl;
  cout.setf(ios::fixed,ios::floatfield);	//﹚翴计
  cout.precision(2);		//砞﹚计计2
  cout << setw(f) << pi << endl;
  cout << setw(f) << pi/4 << endl;
  cout << setw(f) << pi*10*10 << endl;
  getch();	//既氨
}
