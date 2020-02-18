//str_sort.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int SIZE=15;
void main()
{ char s[SIZE][SIZE];
  char *line[SIZE];
  char *ptr;
  int i,j,k;
  cout <<"請輸入字串(q:結束):\n";
  for (i=0;i<SIZE;i++)
  { cout <<"s["<<i<<"]=";
    cin.getline(s[i],20);
    if (strcmp(s[i],"q")==0) break;	//比較字串
    line[i]=s[i];
  }
  cout<<"排序後結果如下:\n";
  for (j=0;j<i;j++)
  for (k=0;k<i-j-1;k++)
  if (strcmp(line[k],line[k+1])>0)
  { ptr=line[k];
    line[k]=line[k+1];
    line[k+1]=ptr;
  }
  for (j=0;j<i;j++)
  cout <<(j+1)<<":"<<line[j]<<endl;	//list
  getch();
}