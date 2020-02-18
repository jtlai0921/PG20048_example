//struct_ret.cpp
#include <iostream.h>
#include <conio.h>
struct rec
{ float price;
  int quantity;
  float total;
};
rec get_struct();
void main()
{ rec items;
  items=get_struct();
  cout << "price=" << items.price << endl;
  cout << "quantity=" <<items.quantity << endl;
  cout << "Total=" << items.total << endl;
  getch();
}
//get_struct()
rec get_struct()
{ rec r;
  cout << "輸入單價與數量:";
  cin>>r.price>>r.quantity;
  r.total=r.price*r.quantity;
  return r;
}
