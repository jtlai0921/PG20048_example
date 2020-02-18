//gen_ref.cpp
#include <iostream.h>
#include <conio.h>
void get_data(int &);
void main()
{ int a,b,c;
  get_data(a);
  get_data(b);
  c = a + b;
  cout <<"c="<<c<<endl;
  getch();
}

//get_data
void get_data(int &data)
{ cout <<"data=";
  cin >> data;
}
