//union_01.cpp
#include <iostream.h>	//cin,cout
#include <iomanip.h>		//setw()
#include <conio.h>		//getch()
void main()
{ union u_rec
  { int x;
    short a;
    char ch;
  }u_var={0x41424344};
  cout <<"��l��:\n";
  cout <<"  16�i      10�i";
  cout <<"\nx ="<<setw(8)<<hex<<u_var.x <<" "<<dec<<u_var.x;
  cout <<"\na ="<<setw(8)<<hex<<u_var.a<<" "<<dec<<u_var.a;
  cout <<"\nch="<<u_var.ch<<endl;
  cout <<"\n�]�wa���:";
  u_var.a =0x4241;		//Hex
  cout <<"\nx ="<<setw(8)<<hex<<u_var.x <<" "<<dec<<u_var.x;
  cout <<"\na ="<<setw(8)<<hex<<u_var.a<<" "<<dec<<u_var.a;
  cout <<"\nch="<<u_var.ch<<endl;
  cout <<"\n�]�wch���:";
  u_var.ch='C';
  cout <<"\nx ="<<setw(8)<<hex<<u_var.x <<" "<<dec<<u_var.x;
  cout <<"\na ="<<setw(8)<<hex<<u_var.a<<" "<<dec<<u_var.a;
  cout <<"\nch="<<u_var.ch<<endl;
  getch();
}