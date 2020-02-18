//object06.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void get_radius();		//無參數
   void get_radius(int);	//單一參數
   inline float list_area();	//inline之原型
};
void Area::get_radius()
{ cout << "半徑=";
  cin >> radius;
  area = 3.14159 * radius * radius;
}
void Area::get_radius(int _radius)
{ radius = _radius;
  area = 3.14159 * radius * radius;
}
inline float Area::list_area()  //inline函數
{ return  area;}

void main()
{ Area circle;	 			//物件宣告
  circle.get_radius();  //呼叫成員函數並輸入資料
  cout << "面積="<< circle.list_area();  //輸出資料
  cout << endl;
  circle.get_radius(20);	//傳初值
  cout << "半徑20之面積="<< circle.list_area();  //輸出資料
  getch();
}