//if_05.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a,b,c,max;
  cout << "輸入a,b,c=";
  cin >> a >> b >> c;
  max=a;			   //以a當最大
  if (b > max)		//max與b比較
    max = b;
  if (c > max)		//max與c比較
    max = c;
  cout << "最大值為" << max << endl;
  getch();
}
