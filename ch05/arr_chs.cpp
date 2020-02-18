//arr_chs.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const N=10;
void main()
{ int i,j,swap,count=0;
  char ch[N];
  for (i=0;i<N;i++)
  { cout << "ch["<<i<<"]=";
    cin >> ch[i];
  }
  i=0;
  do{ swap=0;				//砞ユ传
      j=0;
      do
      { if (ch[j]<ch[j+1])
        { char t=ch[j];	//ユ传
          ch[j]=ch[j+1];
          ch[j+1]=t;
          swap=1;   		//砞﹚Τユ传
        }
        j++;
      }while (j<N-i-1);
      if (!swap) break;	//璝礚ユ传碞瞒秨
      count++;
      i++;
    }while (i<N-1);
  cout <<"磅︽" << count<<"近癹,挡狦:\n";
  for (i=0;i<N;i++)
  cout<<ch[i];
  cout<<endl;
  getch();
}