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
    if (t % 2==0)	//����
    { a[p]=t;
      p += 2;		//0,2,4,6..
      even += t;	//���ƩM
    }
    else
    { a[q]=t;
      q += 2;		//1,3,5,7...
      odd += t;	//�_�ƩM
    }
  }
  for (i=0;i<N;i++)
  { cout.width(3);
    cout <<i;      	//��X����
  }
  cout << endl;
   for (i=0;i<N;i++)
  { cout.width(3);
    cout <<a[i];		//��X�}�C
  }
  cout << endl;
  cout <<"���ƩM="<<even
       <<"\n�_�ƩM="<<odd<<endl;
  getch();
}
