//do_max.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
#include <limits.h>		//for INT_MAX,INT_MIN
void main()
{ int max=INT_MIN,	//設為最小值
      min=INT_MAX,	//設為最大值
      sum=0,n,count=1;
  do
    {
      cout << "輸入第" << count << "數="; cin >> n;
      max = (n > max) ? n : max;	//求最大值
      min = (n < min) ? n : min;	//求最小值
      sum += n;						//求和
    } while (++count<=10);       //改變條件敘述隱藏在條件式內
  cout << "Sum=" << sum <<" ,Max=" << max;
  cout << " ,Min=" << min << endl;
  getch();
}
