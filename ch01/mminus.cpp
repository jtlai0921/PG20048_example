//mminus.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,b=14;
  a--;		//等於a=a-1;後減得 9
  --b;		//等於b=b-1;前減得 13
  cout << "a--="<< a << endl;
  cout << "--b="<< b << endl;
  cout << "a="<< a-- << endl;	//輸出 9 後再減一
  cout << "a--="<< a << endl;	//減一後之值 8
  cout << "b="<< --b << endl;	//先減一後再輸出 12
  getch();
}
