//object02.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void get_radius()
   { cout << "半徑=";
     cin >> radius;
     area = 3.14159 * radius * radius;
   }
   float list_area()
   { return  area;}
};

void main()
{ Area circle;				//物件宣告
  circle.get_radius();  //呼叫成員函數並輸入資料
  cout <<"面積="<< circle.list_area();   //呼叫列出面積
  getch();
}