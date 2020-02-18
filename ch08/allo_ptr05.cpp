//allo_ptr05.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int N = 10;
void sort_str(char*,int);
void main()
{ char *str[]={"one","two","three","four","five","six","seven","eight","nine","ten"};
  int i;
  cout <<"排序前資料:\n";
  for (i=0;i<N;i++)
  cout <<str[i]<<endl;
  sort_str(str[0][0],N);
  cout <<"排序後e資料:\n";
  for (i=0;i<N;i++)
  cout <<str[i]<<endl;
  getch();
}
void sort_str(char *s[],int N)
{ char *t;
  t = new char(10);
  for (int i=0;i<N-1;i++)
  if (strcmp(s[i],s[i+1])==0)
  { strcpy(t,s[i]);
    strcpy(s[i],s[i+1]);
    strcpy(s[i+1],t);
  }
  delete t;
}
