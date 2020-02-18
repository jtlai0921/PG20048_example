//while_a.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short i=1;
  while (i++ <= 10)		//先判斷在加一
  cout << 'A';
  cout << endl;
  i=0;
  while (i < 10)
  cout << char('A' + i++);	//型別轉換兼改變條件
  cout << endl;
  getch();
}