//more_op.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int i,a,sum;
  // i=1,sum=0,a=2只執行一次,i++,a+=2每次迴圈皆改變
  for (i=1,sum=0,a=2; i<=5; i++,a+=2)		//依序改變各變數之值
  sum += a;	
  cout << "i=" << i << ",a=" << a << ",sum=" << sum << endl;	//輸出
  getch();
}  
