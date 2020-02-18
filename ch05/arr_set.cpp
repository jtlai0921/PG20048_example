//arr_set.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
float a[5]={11.2,23.6,8,65.32};
void main()
{ int i;
  for (i=0;i<4;i++)
  a[4]+=a[i];
  cout << "結果如下:\n";
  for (i=0;i<5;i++)
  cout<<"a["<<i<<"]="<<a[i]<<endl;
  getch();
}