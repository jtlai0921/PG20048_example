//static.cpp
#include <iostream.h>
#include <conio.h>
class  Car
{ private:
   static int count;		//靜態資料
   int id;
  public:
   Car();					//無參數之建構子
   void list_car();
   ~Car(){};           	//解構子
};
int Car::count;			//靜態宣告
Car::Car()					//建構子
{ ++count;					//靜態資料加一
  id = count;				//將結果設定給id
}
void Car::list_car()
{ cout << "總數有 "<<count<<" 部,這是第 "<<id<<" 部\n";
}
void main()
{ Car A,B,C,D;	 	  //物件宣告
  A.list_car();
  B.list_car();
  C.list_car();
  D.list_car();
  getch();
}