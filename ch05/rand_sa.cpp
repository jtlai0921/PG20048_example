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
    sum += a[i];   		//�D�M
  }
  ave = sum / 10.0;		//�D����
  for (i=0;i<N;i++)
  { cout.width(6);
    cout <<i;      	//��X����
  }
  cout << endl;
  for (i=0;i<N;i++)
  { cout.width(6);
    cout <<a[i];		//��X�}�C
  }
  cout << endl;
  cout <<"�����t��:\n";
   for (i=0;i<N;i++)
  { cout.width(6);
    cout << (a[i]-ave);		//��X�}�C
  }
  cout <<"\n�M="<<sum
       <<"\n����="<<ave<<endl;
  getch();
}
