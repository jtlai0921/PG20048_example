//fun_value.cpp         �H�ƭȶǸ��
#include <iostream.h> //cout
#include <conio.h>	//getch()
void add(int, int);	//prototype of function
void main()
{
   add(10,20);			//��ƭȰѼ�
   getch();
}
 //function show the sum
 void add(int a, int b)
 { cout << a << "+" << b << "=" << (a + b) << endl;
 }
