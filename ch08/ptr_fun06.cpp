//ptr_fun06.cpp
#include <iostream.h>		//cin,cout
#include <conio.h>      	//getch()
void get_data(int*,int*);	//prototype
void main()
{ int *a,*b;
  a = new int;					//�t�m�O����
  b = new int;
  get_data(a,b);				//���аѼ�
  cout << "sum="<<(*a+*b)<<endl;
  getch();
}

void get_data(int *a,int *b)
{ cout << "��Ja,b=";
  cin >> *a >> *b;
}
