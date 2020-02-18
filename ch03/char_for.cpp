//char_for.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ char ch;
  for (ch='z';ch>='a';ch--)  //以char當控制變數
  cout << ch;
  cout << endl;
  getch();
}    