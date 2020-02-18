//rand_oe.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
const int N = 10;
void main()
{ int a[N],odd=0,even=0,i,p=0,q=1;
  randomize();
  for (i=0;i<N;i++)
  { int t = random(100);
    if (t % 2==0)	//案计
    { a[p]=t;
      p += 2;		//0,2,4,6..
      even += t;	//案计㎝
    }
    else
    { a[q]=t;
      q += 2;		//1,3,5,7...
      odd += t;	//计㎝
    }
  }
  for (i=0;i<N;i++)
  { cout.width(3);
    cout <<i;      	//块爹夹
  }
  cout << endl;
   for (i=0;i<N;i++)
  { cout.width(3);
    cout <<a[i];		//块皚
  }
  cout << endl;
  cout <<"案计㎝="<<even
       <<"\n计㎝="<<odd<<endl;
  getch();
}
