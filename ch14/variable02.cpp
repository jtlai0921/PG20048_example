//variable02.cpp
#include <iostream.h>
#include <conio.h>
#include <string.h>
int x;
void main()
{ int x=0;
  for (int i=0;i<5;i++)
  { ::x++;
    x+=i;
  }
  cout << "�����ܼ�x="<<::x<<endl;
  cout << "�ϰ��ܼ�x="<<x<<endl;
  getch();
}

