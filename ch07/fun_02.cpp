//fun_02.cpp
//�L�ѼƤ���Ƥ��Ǧ^���
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void line();		 		//prototype of function
void main()
{ for (int i=0;i<5;i++)
  line();
  getch();
}
//function draw a line
void line()
{ for (int i=0;i<20;i++)
  cout << "-";
  cout << endl;
}
