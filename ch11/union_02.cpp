//union_02.cpp
#include <iostream.h>	//cin,cout
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
union u_rec					//����union
  { int x;
    short a;
    char ch;
  }u_var={0x41424344};

void output_data(u_rec *);

void main()
{
  cout <<"��l��:\n";
  cout <<"  16�i      10�i";
  output_data(&u_var);		//�Ǧ�}������
  cout <<"\n�]�wa���:";
  u_var.a =0x4241;			//Hex
  output_data(&u_var);
  cout <<"\n�]�wch���:";
  u_var.ch='C';
  output_data(&u_var);
  getch();
}
//output_data
void output_data(u_rec *a)
{ cout <<"\nx ="<<setw(8)<<hex<<a->x <<" "<<dec<<a->x;
  cout <<"\na ="<<setw(8)<<hex<<a->a<<" "<<dec<<a->a;
  cout <<"\nch="<<a->ch<<endl;
}