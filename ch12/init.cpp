//init.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void init();				//無參數之啟始
   void init(int,float);  	//啟始某一初值
   inline float list_area();	//inline之原型
};
void Area::init()
{ radius=0;      				//清除資料
  area=0;
}
void Area::init(int _radius,float _area)
{ radius = _radius;			//設定某一資料
  area = _area;
}
inline float Area::list_area()  //inline函數
{ return  area;}
const float PI = 3.14159;
void main()
{ Area circle;	 			//物件宣告
  int _radius = 10;
  float _area=PI*_radius*_radius;
  circle.init(_radius,_area);  //啟始資料並傳資料
  cout << "面積="<< circle.list_area();  //輸出資料
  cout << endl;
  circle.init();			//清除資料
  cout << "面積="<< circle.list_area();  //輸出資料
  getch();
}