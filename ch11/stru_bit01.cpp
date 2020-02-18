//stru_bit01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
struct s_field
{ unsigned short flag:2;
  unsigned short data:8;
  unsigned short index:2;
  unsigned short deck:4;
}f_var={2,8,2,1};
void main()
{
  cout <<"\nflag ="<<f_var.flag;
  cout <<"\ndata ="<<f_var.data;
  cout <<"\nindex="<<f_var.index;
  cout <<"\ndeck ="<<f_var.deck;
  getch();
}