//rand_sa.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
const int N = 10;
void main()
{ int a[N],sum=0,i;
  float ave;
  randomize();
  for (i=0;i<N;i++)
  { a[i] = random(100);
    sum += a[i];   		//求和
  }
  ave = sum / 10.0;		//求平均
  for (i=0;i<N;i++)
  { cout.width(6);
    cout <<i;      	//輸出註標
  }
  cout << endl;
  for (i=0;i<N;i++)
  { cout.width(6);
    cout <<a[i];		//輸出陣列
  }
  cout << endl;
  cout <<"平均差為:\n";
   for (i=0;i<N;i++)
  { cout.width(6);
    cout << (a[i]-ave);		//輸出陣列
  }
  cout <<"\n和="<<sum
       <<"\n平均="<<ave<<endl;
  getch();
}
