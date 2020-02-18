//array_ptr03.cpp
#include <iostream.h>
#include <conio.h>
void allocate(int *[],int );
void set_data(int *[],int );
void output(int *[],int );
void de_allocate(int *[]);
void main()
{ int *p[5],n;
  cout << "n=";
  cin >> n;
  allocate(p,n);
  set_data(p,n);
  output(p,n);
  de_allocate(p);
  getch();
}

void allocate(int *p[],int n)
{ for (int i=0;i<5;i++)
  p[i]=new int[n];
}

void set_data(int *p[],int n)
{ for (int i=0;i<5;i++)
  for (int j=0;j<n;j++)
  *(p[i]+j)=(i+1)*(j+2);
}

void output(int *p[],int n)
{ for (int i=0;i<5;i++)
  { for (int j=0;j<n;j++)
    { cout.width(4);
      cout << *(p[i]+j);
    }
    cout << endl;
  }
}

void de_allocate(int *p[])
{ for (int i=0;i<5;i++)
  delete[] p[i];
}
