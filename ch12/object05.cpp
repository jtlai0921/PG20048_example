//object05.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void get_radius();
   inline float list_area();	//inline���쫬
};
void Area::get_radius()
{ cout << "�b�|=";
  cin >> radius;
  area = 3.14159 * radius * radius;
}
inline float Area::list_area()  //inline���
    { return  area;}

void main()
{ Area circle;	 			//����ŧi
  circle.get_radius();  //�I�s������ƨÿ�J���
  cout << "���n="<< circle.list_area();  //��X���
  getch();
}