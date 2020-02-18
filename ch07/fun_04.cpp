//fun_04.cpp
//以傳值呼叫(Call by value)傳參數
#include <iostream.h>	//cout
#include <conio.h>		//getch()
int getdata();		 		//prototype of function
void line(int,char);
void main()
{ int n=getdata();
  for (int i=0;i<n;i++)
  line(i+1,'*');
  getch();
}
//function draw line
void line(int n,char ch)
{ for (int i=0;i<n;i++)
  cout << ch;
  cout << endl;
}
//function getdata from console
int getdata()
{ int n;
  cout <<"Enter a number n=";
  cin >> n;
  return n;
}
