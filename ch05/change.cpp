//change.cpp
#include <iostream.h>	//cout, cin
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
void main()
{ int dollar[]={500,100,50,10,5,1};	//代表500元,100元...
  int i,change,paid;
  cout << "輸入購物金額: ";
  cin >> paid;
  paid %= 1000;	//若超過1000元則求其餘額以便找零
  paid = 1000 - paid; //應找零錢
  cout << "應找金額為: " << paid << " 元\n";
  for (i=0;i<6;i++)
  { change = paid / dollar[i];	//求各金額找零個數
    cout << setw(4) << dollar[i] << " 元= " << change << " 個\n";
    paid %= dollar[i];				//求餘額
  }
  getch();								//暫停
}
