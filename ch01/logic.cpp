//logic.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int a=10,b=15,c=14;
  cout << "\na>b && b>c = " << (a>b && b>c) << endl;
  cout << "\na>b || b>c = " << (a>b || b>c) << endl;
  //�_�w�������Y�άA���A�_
  cout << "\n!(a>b)= " << (!(a>b)) << endl;
  cout << "\n!(b>c)= " << (!(b>c)) << endl;
  //����N�B��A���Y����̫ᬰ�޿�B��
  cout << "\n a+6 > b && b>c =" << (a+6>b && b>c) << endl;
  getch();
}  
