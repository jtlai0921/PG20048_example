//variable02.cpp
#include <iostream.h>
#include <conio.h>
#include <string.h>
int x;
void main()
{ int x=0;
  for (int i=0;i<5;i++)
  { ::x++;
    x+=i;
  }
  cout << "整體變數x="<<::x<<endl;
  cout << "區域變數x="<<x<<endl;
  getch();
}

