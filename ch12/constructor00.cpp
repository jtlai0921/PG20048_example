//constructor00.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   Area();							//沒有參數之建構子
   inline float list_area();	//inline之原型
};
Area::Area()					//建構子定義
{ radius=0;      				//清除資料
  area=0;
  cout <<"我是建構子.\n";
}
inline float Area::list_area()  //inline函數
{ return  area;}
void main()
{ Area circle;	 						//物件宣告 circle
  cout << "面積="<< circle.list_area();  //輸出資料
  cout << endl;
  getch();
}