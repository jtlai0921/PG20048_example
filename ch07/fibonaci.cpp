//fibonaci.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ void fibonaci(int,int&);//��ƭ쫬
  int numbers,result;
  cout << "��J���䤧�O�󶵼�:" ;
  cin >> numbers;
  fibonaci(numbers,result);	//��ƩI�s
  cout <<"�O��ƦC�� "<<numbers <<"���Ȭ� "
       << result<<endl;
  getch();
}

void fibonaci(int n, int &value)	//���
{ int first=0,second=1,count=3;
  if (n==1) value=first;
  if (n==2) value=second;
  while (count<=n)
  { value = first + second;		//��@�����e�ⶵ���M
    first = second;
    second = value;
    count++;
  }
}

