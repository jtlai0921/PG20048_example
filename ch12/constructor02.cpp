//constructor02.cpp
#include <iostream.h>
#include <conio.h>
class  Area
{ private:
   int  radius;
   float  area;
  public:
   Area();							//�S���ѼƤ��غc�l
   inline float list_area();	//inline���쫬
};
Area::Area()					//�غc�l�w�q
{ radius=0;      				//�M�����
  area=0;
  cout <<"�ڬO�غc�l.\n";
}
inline float Area::list_area()  //inline���
{ return  area;}
void main()
{ Area circle,circle_1;	 							//����ŧi circle
  cout << "���n="<< circle.list_area();  		//��X���
  cout << endl;
  cout << "���n="<< circle_1.list_area();  	//��X���
  cout << endl;
  getch();
}