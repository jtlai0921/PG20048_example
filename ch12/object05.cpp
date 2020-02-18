//object05.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void get_radius();
   inline float list_area();	//inline之原型
};
void Area::get_radius()
{ cout << "半徑=";
  cin >> radius;
  area = 3.14159 * radius * radius;
}
inline float Area::list_area()  //inline函數
    { return  area;}

void main()
{ Area circle;	 			//物件宣告
  circle.get_radius();  //呼叫成員函數並輸入資料
  cout << "面積="<< circle.list_area();  //輸出資料
  getch();
}