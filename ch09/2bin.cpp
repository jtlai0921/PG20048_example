/* enter a positive integer and convert to binary */
//2bin.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char s[16];
  int i,a,b;
  for (i=0;i<16;i++)	/* set to '0'*/
  s[i]='0';
  cout<<"輸入任一整數a=";		//設輸入18
  cin>>a;
  i = 0;
  while (a!=0)
  { b = a % 2;		/* get the remainder */
    if (b==0)		/* save from 0 or 1 to s[0..15] */
    s[i]='0';
    else s[i]='1';
    a = a / 2;		/* get quoient divide by 2 */
    i++;
  }
  for (i=15;i>=0;i--)	/* print reverse */
  cout<<s[i]; 		//_________________
  cout<<endl;
  getch();
}
