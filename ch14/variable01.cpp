//variable01.cpp
#include <iostream.h>
#include <conio.h>
#include <string.h>
int x;
char ch,st[5];
void main()
{ x++;						//�����ܼ�
  cout << "x="<<x<<endl;
  ch='A';
  cout << "ch="<<ch<<endl;
  int x =10;				//�ϰ��ܼ�
  x++;
  cout << "x="<<x<<endl;
  strcpy(st,"BBB");		//�r��ƻs
  cout << "st="<<st<<endl;
  getch();
}

