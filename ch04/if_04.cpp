//if_04.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int number,max=0;		//定最大之初值為0
  do
  { cout << "輸入任意數(0:結束)=";
    cin >> number;
    if (number > max)
      max = number;		//單一敘述
  } while (number!=0);
  cout << "最大值為" << max << endl;
  getch();
}
