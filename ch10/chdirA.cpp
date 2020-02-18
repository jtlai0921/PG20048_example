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
      perror("getcurdir()");	//有錯則顯示getcurdir()
      exit(1);
   }
   cout<<"目前目錄為:"<< cur_dir<<endl;
   if (chdir("\\Program Files"))	//更改到 Program Files
   {
      perror("chdir()");		//有錯則顯示chdir()
      exit(1);
   }
   if (getcurdir(0, new_dir))	//取得目前路徑
   {
      perror("getcurdir()");	//有錯則顯示getcurdir()
      exit(1);
   }
   cout<<"更改後目錄為:"<< new_dir<<endl;
   getch();
}