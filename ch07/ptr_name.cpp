//ptr_name.cpp
#include <iostream.h>
#include <conio.h>
int *get_data();
void main()
{ int *a,*b,c;
  a = get_data();	//以位址接收
  b = get_data();
  c = *a + *b;
  cout << "c=" << c <<endl;
  delete a;
  delete b;
  getch();
}
//*get_data()
int *get_data()	//函數名稱以指標傳回
{ int *data;
  data = new int;
  cout << "data=";
  cin >> *data;
  return data;		//傳回位址
}