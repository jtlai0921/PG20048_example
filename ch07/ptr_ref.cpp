//ptr_ref.cpp
#include <iostream.h>
#include <conio.h>
void get_data(int &);
void main()
{ int *a,*b,c;
  a = new int;
  b = new int;
  get_data(*a);	//*a �P��Ƥ���data���V�P�@�O�����
  get_data(*b);	//��data��*a���O�W
  c = *a + *b;
  cout << "c="<<c<<endl;
  delete a;
  delete b;
  getch();
}

//get_data
void get_data(int &data)
{ cout <<"data=";
  cin >> data;
}