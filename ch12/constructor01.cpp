//constructor01.cpp
#include <iostream.h>
#include <conio.h>
const float PI = 3.14159;
class  Area
{ private:
   int  radius;
   float  area;
  public:
   Area();							//�S���ѼƤ��غc�l
   Area(int);                 //�@�ѼƤ��غc�l
   Area(int,float);				//��ѼƤ��غc�l
   inline float list_area();	//inline���쫬
};
Area::Area()					//�غc�l�w�q
{ radius=0;      				//�M�����
  area=0;
  cout <<"�ڬO�L�Ѽƫغc�l\n";
}
Area::Area(int _radius)
{ radius = _radius;
  area = PI * radius * radius;
  cout <<"�ڬO�@�ѼƤ��غc�l\n";
}
Area::Area(int _radius,float _area)
{ radius = _radius;			//�]�w�Y�@���
  area = _area;
  cout <<"�ڬO��ѼƤ��غc�l\n";
}
inline float Area::list_area()  //inline���
{ return  area;}

void main()
{ Area circle;	 						//����ŧi circle
  cout << "���n="<< circle.list_area();  //��X���
  cout << endl;
  int _radius = 10;
  Area circle_1(_radius);
  cout << "���n="<< circle_1.list_area();  //��X���
  cout << endl;
  float _area=PI*_radius*_radius;
  Area circle_2(_radius,_area);  //����ŧi circle_2
  cout << "���n="<< circle_2.list_area();  //��X���
  getch();
}