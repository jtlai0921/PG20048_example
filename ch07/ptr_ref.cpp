//ptr_ref.cpp
#include <iostream.h>
#include <conio.h>
void get_data(int &);
void main()
{ int *a,*b,c;
  a = new int;
  b = new int;
  get_data(*a);	//*a 與函數內之data指向同一記憶體或
  get_data(*b);	//稱data為*a之別名
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