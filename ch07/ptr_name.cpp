//ptr_name.cpp
#include <iostream.h>
#include <conio.h>
int *get_data();
void main()
{ int *a,*b,c;
  a = get_data();	//�H��}����
  b = get_data();
  c = *a + *b;
  cout << "c=" << c <<endl;
  delete a;
  delete b;
  getch();
}
//*get_data()
int *get_data()	//��ƦW�٥H���жǦ^
{ int *data;
  data = new int;
  cout << "data=";
  cin >> *data;
  return data;		//�Ǧ^��}
}