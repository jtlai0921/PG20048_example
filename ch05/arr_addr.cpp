//arr_addr.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <iomanip.h>		//setw()
const float PI=3.14159;
float radius[5]={11.2,23.6,33.4,44.32,55.08};
void main()
{ int i,f=9;
  float area[5],sphere[5];
  for (i=0;i<5;i++)
  { area[i]=PI*radius[i]*radius[i];	//求圓面積
    sphere[i]=4*PI*radius[i];			//求表面積
  }
  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);
  cout <<" [*半徑*] [圓面積] [表面積]\n";
  for (i=0;i<5;i++)
  cout<<setw(f)<<*(radius+i)			//以位址指標取得各元素
      <<setw(f)<<*(area+i)
      <<setw(f)<<*(sphere+i)<<endl;
  getch();
}