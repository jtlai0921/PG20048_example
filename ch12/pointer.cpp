//pointer.cpp
#include <iostream.h>
#include <conio.h>
class  Distance
{ private:
   int feet;
   float inches;
  public:
   Distance();				//�L�ѼƤ��غc�l
   void get_Distance();	//��J���
   void list_Distance();//��ܸ��
   ~Distance(){};      	//�Ѻc�l
};
Distance::Distance()		//�غc�l
{ feet=0;
  inches=0.0;
}
void Distance::get_Distance()	//��J���
{ cout <<"�^��="; cin >> feet;
  cout <<"�^�T="; cin >> inches;
}
void Distance::list_Distance()
{ cout << feet <<"\'-"<<inches<<'\"';
}
void main()
{ Distance *dist;	 	  //����ŧi���ʺA
  dist = new Distance;	//�t�m�O����
  dist->get_Distance();	//�ʺA���o�������
  dist->list_Distance();
  delete dist;				//����O����
  getch();
}