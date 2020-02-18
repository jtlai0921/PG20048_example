//constructor01.cpp
#include <iostream.h>
#include <conio.h>
const float PI = 3.14159;
class  Area
{ private:
   int  radius;
   float  area;
  public:
   Area();							//⊿Τ把计ぇ篶
   Area(int);                 //把计ぇ篶
   Area(int,float);				//ㄢ把计ぇ篶
   inline float list_area();	//inlineぇ
};
Area::Area()					//篶﹚竡
{ radius=0;      				//睲埃戈
  area=0;
  cout <<"и琌礚把计篶\n";
}
Area::Area(int _radius)
{ radius = _radius;
  area = PI * radius * radius;
  cout <<"и琌把计ぇ篶\n";
}
Area::Area(int _radius,float _area)
{ radius = _radius;			//砞﹚琘戈
  area = _area;
  cout <<"и琌ㄢ把计ぇ篶\n";
}
inline float Area::list_area()  //inlineㄧ计
{ return  area;}

void main()
{ Area circle;	 						//ン circle
  cout << "縩="<< circle.list_area();  //块戈
  cout << endl;
  int _radius = 10;
  Area circle_1(_radius);
  cout << "縩="<< circle_1.list_area();  //块戈
  cout << endl;
  float _area=PI*_radius*_radius;
  Area circle_2(_radius,_area);  //ン circle_2
  cout << "縩="<< circle_2.list_area();  //块戈
  getch();
}