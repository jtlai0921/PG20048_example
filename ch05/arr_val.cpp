//arr_val.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ int a[5],i;
  for (i=0;i<5;i++)
  a[i]=i+1;
  cout << "���G�p�U:\n";
  for (i=0;i<5;i++)
  cout<<"a["<<i<<"]="<<a[i]<<endl;
  getch();
}