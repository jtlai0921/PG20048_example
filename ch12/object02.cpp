//object02.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void get_radius()
   { cout << "�b�|=";
     cin >> radius;
     area = 3.14159 * radius * radius;
   }
   float list_area()
   { return  area;}
};

void main()
{ Area circle;				//����ŧi
  circle.get_radius();  //�I�s������ƨÿ�J���
  cout <<"���n="<< circle.list_area();   //�I�s�C�X���n
  getch();
}