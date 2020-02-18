//weather.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>	//randomize(),random
void main()
{ int weather;
  cout << "天氣(0,1)=";	//0:好,1:雨
  cin >> weather;
  if (weather)				//weather==1
  { cout << "看電影去,多少錢?";
    int money;
    cin >> money;
    if (money>=1000)
    cout << "錢夠\n";
    else
    cout << "錢不夠\n";
  } else
  { cout <<"郊遊去,交通工具(0,1)="; //0:公車 1:機車
    int tool;
    cin >> tool;
    if (tool)
    cout << "騎機車\n";
    else
    cout <<"搭公車\n";
  }
  getch();
}      