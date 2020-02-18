//for_cut.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int days=0,length=100;
  for (;length>0;length /=2)	//一天一半
  days++;
  cout << days << "天剪完" << endl;
  getch();
}