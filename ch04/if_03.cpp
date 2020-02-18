//if_03.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char fine;
  cout << "天氣晴朗(Y/N)?";
  cin >> fine;
  if (fine=='Y' || fine=='y')		//大小寫之Y/y皆可
    cout <<"去郊遊!" << endl;
  else
    cout << "去看電影!\n";
  getch();
}
