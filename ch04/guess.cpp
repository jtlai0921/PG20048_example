//guess.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>	//randomize(),random
void main()
{ int number,guess,count=0;
  randomize();				//啟動亂數函數產生器
  number = random(100);	//產生0-99間之亂數
  do { count++;
       cout << count <<"=";
       cin >> guess;
       if (guess > number) cout << "太大\n";
       if (guess < number) cout << "太小\n";
     }
  while (guess != number);
  cout << "你猜了"<<count<<"次\n";
  if (count<=5) cout << "你很聰明\n";
  else
  if (count>=15) cout <<"太糟糕\n";

  getch();
}