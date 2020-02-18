//get_max.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a=10,b=20,c=15,max=0,min;
  max = (a > max) ? a : max;
  max = (b > max) ? b : max;
  max = (c > max) ? c : max;
  cout << "最大值=" << max << endl;
  min=a;
  min = (b < min) ? b : min;
  min = (c < min) ? c : min;
  cout << "最小值=" << min << endl;
  getch();
}  
