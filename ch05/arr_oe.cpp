//arr_oe.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ int a[5],i;
  for (i=0;i<5;i++)
  if (i%2==0) a[i]=0;
  else a[i]=1;
  cout << "結果如下:\n";
  for (i=0;i<5;i++)
  cout<<"a["<<i<<"]="<<a[i]<<endl;
  getch();
}