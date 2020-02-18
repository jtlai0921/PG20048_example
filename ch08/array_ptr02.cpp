//array_ptr02.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int *p[5],n,i,j;
  cout << "n=";
  cin >> n;
  //allocate
  for (i=0;i<5;i++)
  p[i]=new int[n];
  //set data
  for (i=0;i<5;i++)
  for (j=0;j<n;j++)
  *(p[i]+j)=(i+1)*(j+2);
  //output
  for (i=0;i<5;i++)
  { for (j=0;j<n;j++)
    { cout.width(4);
      cout << *(p[i]+j);
    }
    cout << endl;
  }
  //de_allocate
  for (i=0;i<5;i++)
  delete[] p[i];
  getch();
}