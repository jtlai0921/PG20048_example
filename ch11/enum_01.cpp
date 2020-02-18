//enum_01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
enum car_brand
{ FORD,BENZ,BMW,TOYOTA,NISSAN};
void main()
{ car_brand car_name;
  int n;
  cout <<"輸入車種0-4:";
  cin >> n;
  switch (n)
  { case 0:car_name=FORD;break;
    case 1:car_name=BENZ;break;
    case 2:car_name=BMW;break;
    case 3:car_name=TOYOTA;break;
    case 4:car_name=NISSAN;break;
    default : cout <<"\n錯誤序號:";
  }
  switch (car_name)
  { case FORD  :cout <<"\nFORD";break;
    case BENZ  :cout <<"\nBENZ";break;
    case BMW   :cout <<"\nBMW";break;
    case TOYOTA:cout <<"\nTOYOTA";break;
    case NISSAN:cout <<"\nNISSAN";break;
  }
  getch();
}