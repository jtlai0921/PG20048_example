//init.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   void init();				//�L�ѼƤ��ҩl
   void init(int,float);  	//�ҩl�Y�@���
   inline float list_area();	//inline���쫬
};
void Area::init()
{ radius=0;      				//�M�����
  area=0;
}
void Area::init(int _radius,float _area)
{ radius = _radius;			//�]�w�Y�@���
  area = _area;
}
inline float Area::list_area()  //inline���
{ return  area;}
const float PI = 3.14159;
void main()
{ Area circle;	 			//����ŧi
  int _radius = 10;
  float _area=PI*_radius*_radius;
  circle.init(_radius,_area);  //�ҩl��ƨöǸ��
  cout << "���n="<< circle.list_area();  //��X���
  cout << endl;
  circle.init();			//�M�����
  cout << "���n="<< circle.list_area();  //��X���
  getch();
}