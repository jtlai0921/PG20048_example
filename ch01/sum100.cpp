//sum100.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int top,bottom,sum;
  top = 1;							//上底
  bottom = 100;					//下底
  sum = (top + bottom )*100/2;//梯形面積 高為100
  cout << "1+2+..+100=" << sum << endl;
  getch();							//暫停
}