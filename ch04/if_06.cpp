//if_06.cpp
#include <iostream.h>
#include <conio.h>
#include <math.h>		//sqrt(x)
void main()
{ float a,b,c,area,s;
  cout << "輸入三邊長a,b,c=";
  cin >> a >> b >> c;
  if (a+b>c && a+c>b && b+c>a)	//判斷任兩邊和須大於第三邊
  { s=(a+b+c)/2;						//周長一半
    area=sqrt(s*(s-a)*(s-b)*(s-c));	//以三邊長求面積
    cout << "面積為" << area << endl;
  }
  if (a+b<c || a+c<b || b+c<a)
  cout <<"不能構成一三角形.\n";
  getch();
}
