//stru_size01.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
typedef struct
{ int chi,eng,math,total;
  float ave;
}rec;

void main()
{ rec Bill;
  cout <<"�U��줧�j�p:";
  cout <<"\nSize of chi=" << sizeof(Bill.chi);
  cout <<"\nSize of eng=" << sizeof(Bill.eng);
  cout <<"\nSize of math=" << sizeof(Bill.math);
  cout <<"\nSize of total=" << sizeof(Bill.total);
  cout <<"\nSize of ave=" << sizeof(Bill.ave);
  cout <<"\n���c�j�p=" << sizeof(Bill);
  cout <<"\n";
  getch();
}