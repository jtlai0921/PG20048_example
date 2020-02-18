//fun_ovr06.cpp
#include <iostream.h>
#include <conio.h>
float area(float,float=1,int=0);
void main()
{
  cout <<"圓面積="<<area(10)<<endl;
  cout <<"三角形面積"<<area(2.4,4,1)<<endl;
  cout <<"四方形面積"<<area(6.0,8,2)<<endl;
  getch();
}
float area(float a,float b,int type)
{ switch (type)
  { case 0 : return (3.14159*a*a);//圓面積
    case 1 : return (a*b/2.0);	//三角形面積
    case 2 : return (a*b);			//四方形面積
    default : return 0;
  }
}
