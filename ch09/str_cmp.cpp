//str_cmp.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *s1="ABC",*s2="ABC";			//�r��
  cout <<s1<<"="<<s2<<" �Ȭ�:";
  cout << strcmp(s1,s2)<<endl;
  strcpy(s1,"AB");
  cout <<s1<<"<"<<s2<<" �Ȭ�:";
  cout << strcmp(s1,s2)<<endl;
  strcpy(s1,"ABC");
  strcpy(s2,"AB");
  cout <<s1<<">"<<s2<<" �Ȭ�:";
  cout << strcmp(s1,s2)<<endl;
  getch();
}