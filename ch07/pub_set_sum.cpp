//pub_set_sum.cpp
#include <iostream.h>
#include <conio.h>
void sum();
void set();
int a,b;		//�����ܼ�
void main()
{set();		//�I�s���
 sum(); 		//�I�s���
 getch();
}
//set()
void set()
{ a=10;
  b=20;
}
//sum()
void sum()
{ cout << "a+b="<<(a+b)<<endl;
}