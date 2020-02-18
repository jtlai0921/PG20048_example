//firstnext.cpp
#include <iostream.h>
#include <dir.h>
#include <conio.h>
#include <iomanip.h>	//setw()
void main(void)
{
   struct ffblk file;
   int done;
   cout<<"列出所有檔案[*.cpp]及大小:\n";
   done = findfirst("*.cpp",&file,0);
   while (!done)
   {
      cout<<setw(20)<<file.ff_name	//檔名
          <<setw(6)<<file.ff_fsize<<" bytes"	//檔案大小
          <<endl;
      done = findnext(&file);	//下一個檔案
   }
   getch();
}
