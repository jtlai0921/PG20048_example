//pointer.cpp
#include <iostream.h>
#include <conio.h>
class  Distance
{ private:
   int feet;
   float inches;
  public:
   Distance();				//無參數之建構子
   void get_Distance();	//輸入資料
   void list_Distance();//顯示資料
   ~Distance(){};      	//解構子
};
Distance::Distance()		//建構子
{ feet=0;
  inches=0.0;
}
void Distance::get_Distance()	//輸入資料
{ cout <<"英尺="; cin >> feet;
  cout <<"英吋="; cin >> inches;
}
void Distance::list_Distance()
{ cout << feet <<"\'-"<<inches<<'\"';
}
void main()
{ Distance *dist;	 	  //物件宣告為動態
  dist = new Distance;	//配置記憶體
  dist->get_Distance();	//動態取得成員函數
  dist->list_Distance();
  delete dist;				//釋放記憶體
  getch();
}