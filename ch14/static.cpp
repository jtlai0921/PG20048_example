//static.cpp
#include <iostream.h>
#include <conio.h>
int get_x();
int x;
void main()
{ for (int i=0;i<3;i++)
  { static int x;
    ::x=get_x();
    x = x + ::x;
    cout <<"for ����x="<<x<<endl;
    cout <<"get_x����::x="<<::x<<endl;
  }
  getch();
}
int get_x()
{ static int x;
  return ++x;
}
