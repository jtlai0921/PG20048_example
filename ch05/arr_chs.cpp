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
  do{ swap=0;				//���]�洫��
      j=0;
      do
      { if (ch[j]<ch[j+1])
        { char t=ch[j];	//�洫
          ch[j]=ch[j+1];
          ch[j+1]=t;
          swap=1;   		//�]�w���洫��
        }
        j++;
      }while (j<N-i-1);
      if (!swap) break;	//�Y�L�洫�N���}
      count++;
      i++;
    }while (i<N-1);
  cout <<"�@����" << count<<"���j,���G�p�U:\n";
  for (i=0;i<N;i++)
  cout<<ch[i];
  cout<<endl;
  getch();
}