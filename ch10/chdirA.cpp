//chdirA.cpp
#include <iostream.h>
#include <stdlib.h>
#include <dir.h>
#include <conio.h>
char cur_dir[MAXDIR];
char new_dir[MAXDIR];
void main(void)
{
   cout << "MAXDIR="<<MAXDIR<<endl;
   if (getcurdir(0, cur_dir))
   {
      perror("getcurdir()");	//�����h���getcurdir()
      exit(1);
   }
   cout<<"�ثe�ؿ���:"<< cur_dir<<endl;
   if (chdir("\\Program Files"))	//���� Program Files
   {
      perror("chdir()");		//�����h���chdir()
      exit(1);
   }
   if (getcurdir(0, new_dir))	//���o�ثe���|
   {
      perror("getcurdir()");	//�����h���getcurdir()
      exit(1);
   }
   cout<<"����ؿ���:"<< new_dir<<endl;
   getch();
}