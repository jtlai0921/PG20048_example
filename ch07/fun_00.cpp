//fun_00.cpp
//��ƥH�ѼƱ�����ƪ����B�z�ᤣ�Ǧ^���
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void add(int, int);		//prototype of function
void main()
{ int a=10,b=20;
  add(a,b);
  getch();
}
//function show the sum
void add(int a, int b)
{ cout << a << "+" << b << "="
       << (a + b);
}

