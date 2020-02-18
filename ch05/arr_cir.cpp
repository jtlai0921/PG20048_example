//arr_cir.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <iomanip.h>		//setw()
const float PI=3.14159;
float radius[5]={11.2,23.6,33.4,44.32,55.08};
void main()
{ int i,f=9;
  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);
  cout <<" [*¥b®|*] [¶ê­±¿n] [ªí­±¿n]\n";
  for (i=0;i<5;i++)
  cout<<setw(f)<<radius[i]
      <<setw(f)<<PI*radius[i]*radius[i]
      <<setw(f)<<4*PI*radius[i]<<endl;
  getch();
}