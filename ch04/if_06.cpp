//if_06.cpp
#include <iostream.h>
#include <conio.h>
#include <math.h>		//sqrt(x)
void main()
{ float a,b,c,area,s;
  cout << "��J�T���a,b,c=";
  cin >> a >> b >> c;
  if (a+b>c && a+c>b && b+c>a)	//�P�_������M���j��ĤT��
  { s=(a+b+c)/2;						//�P���@�b
    area=sqrt(s*(s-a)*(s-b)*(s-c));	//�H�T����D���n
    cout << "���n��" << area << endl;
  }
  if (a+b<c || a+c<b || b+c<a)
  cout <<"����c���@�T����.\n";
  getch();
}
