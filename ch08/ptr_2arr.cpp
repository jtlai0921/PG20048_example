//ptr_2arr.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>		//random()
const int N=4,M=3;
void main()
{ int a[N][M],i,j,*ptr;
  ptr = &a[0][0];		//設定第一元素位址給指標變數
  for (i=0;i<N*M;i++)
   *(ptr+i)=random(101);	//產生亂數值0-100
   cout <<"陣列資料如下:\n";
   for (i=0;i<N;i++)
   { for (j=0;j<M;j++)
     { cout.width(3);	//設定欄位寬度
       cout << *(*(a+i)+j) << " ";
     }
     cout << "\n";
   }
   getch();
}
