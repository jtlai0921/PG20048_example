//logic.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int a=10,b=15,c=14;
  cout << "\na>b && b>c = " << (a>b && b>c) << endl;
  cout << "\na>b || b>c = " << (a>b || b>c) << endl;
  //否定應把關係用括號括起
  cout << "\n!(a>b)= " << (!(a>b)) << endl;
  cout << "\n!(b>c)= " << (!(b>c)) << endl;
  //先算術運算再關係比較最後為邏輯運算
  cout << "\n a+6 > b && b>c =" << (a+6>b && b>c) << endl;
  getch();
}  
