//fun_al.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
int sum100(int, int);		//��ƭ쫬
void main()
{ int from=1,end=100,sum;
  sum = sum100(from,end);
  cout << from<<"+2+..+" << end << "="<<sum<<endl;
  getch();
}

int sum100(int f, int t)
{ int sum=0;
  for (int i=f;i<=t;i++)	//�Df��t���M
  sum +=i;
  return sum;
}

