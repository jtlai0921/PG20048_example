//fun_ovr06.cpp
#include <iostream.h>
#include <conio.h>
float area(float,float=1,int=0);
void main()
{
  cout <<"�ꭱ�n="<<area(10)<<endl;
  cout <<"�T���έ��n"<<area(2.4,4,1)<<endl;
  cout <<"�|��έ��n"<<area(6.0,8,2)<<endl;
  getch();
}
float area(float a,float b,int type)
{ switch (type)
  { case 0 : return (3.14159*a*a);//�ꭱ�n
    case 1 : return (a*b/2.0);	//�T���έ��n
    case 2 : return (a*b);			//�|��έ��n
    default : return 0;
  }
}
