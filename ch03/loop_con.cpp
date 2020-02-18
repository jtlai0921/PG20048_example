//loop_con.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int n,sum=0;
  for (;;)
  { cout << "for n=";
    cin >> n;
    if (n==0) break;
    sum += n;
  }
  cout << "sum [for]="<<sum<<endl;
  sum=0;
  while(1)
  { cout << "while n=";
    cin >> n;
    if (n==0) break;
    sum += n;
  }
  cout << "sum [while]="<<sum<<endl;
  sum=0;
  do
  {cout << "do...while n=";
    cin >> n;
    if (n==0) break;
    sum += n;
  }while(true);
  cout << "sum [do...while]="<<sum<<endl;
  getch();
}