//enum_02.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
enum car_brand
{ FORD,BENZ,BMW,TOYOTA,NISSAN};
struct car_data
{ car_brand car_name;
  float price[5];
};
char s[][8]={"FORD","BENZ","BMW","TOYOTA","NISSAN"};
void main()
{ car_data car_type={FORD,50,150,140,45,46};
  int n;
  cout <<"輸入車種0-4:";
  cin >> n;
  switch (n)
  { case 0:car_type.car_name=FORD;break;
    case 1:car_type.car_name=BENZ;break;
    case 2:car_type.car_name=BMW;break;
    case 3:car_type.car_name=TOYOTA;break;
    case 4:car_type.car_name=NISSAN;break;
    default : cout <<"\n錯誤序號:";
  }
  cout << s[car_type.car_name];
  cout <<" 每部 "<<car_type.price[n]<<" 萬元\n";
  getch();
}