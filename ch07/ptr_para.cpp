//ptr_para.cpp
#include <iostream.h>
#include <conio.h>
void get_data(int *);
void main()
{ int *a,*b,c;
  a = new int;
  b = new int;
  get_data(a);	//�Ǧ�}
  get_data(b);
  c = *a + *b;
  cout << "c=" << c <<endl;
  delete a;
  delete b;
  getch();
}
//get_data()
void get_data(int *data)	//��ƦW�٥H���жǦ^
{ cout << "data=";
  cin >> *data;
}
