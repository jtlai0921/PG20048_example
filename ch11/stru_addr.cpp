//stru_addr.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
struct rec
{ int chi,eng,math,total;
  float ave;
};
void main()
{ rec Bill;
  cout <<"各欄位之記憶體位址:";
  cout <<"\nchi=" << &Bill.chi;
  cout <<"\neng=" << &Bill.eng;
  cout <<"\nmath=" << &Bill.math;
  cout <<"\ntotal=" << &Bill.total;
  cout <<"\nave=" << &Bill.ave;
  cout <<"\n結構位址=" << &Bill<<endl;
  getch();
}