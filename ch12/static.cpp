//static.cpp
#include <iostream.h>
#include <conio.h>
class  Car
{ private:
   static int count;		//�R�A���
   int id;
  public:
   Car();					//�L�ѼƤ��غc�l
   void list_car();
   ~Car(){};           	//�Ѻc�l
};
int Car::count;			//�R�A�ŧi
Car::Car()					//�غc�l
{ ++count;					//�R�A��ƥ[�@
  id = count;				//�N���G�]�w��id
}
void Car::list_car()
{ cout << "�`�Ʀ� "<<count<<" ��,�o�O�� "<<id<<" ��\n";
}
void main()
{ Car A,B,C,D;	 	  //����ŧi
  A.list_car();
  B.list_car();
  C.list_car();
  D.list_car();
  getch();
}