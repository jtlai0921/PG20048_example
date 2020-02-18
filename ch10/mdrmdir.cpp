//mdrmdir.cpp
#include <iostream.h>
#include <stdio.h>	//perror
#include <conio.h>	//getch()
#include <process.h>	//system
#include <dir.h>
#define DIRNAME "testdir.$$$"
void main(void)
{   int stat;
    stat = mkdir(DIRNAME);	//在目前目錄下建一目錄
    if (stat==0)
      cout <<DIRNAME<<"目錄建立OK!\n";
    else
    { cout<<"無法建立目錄\n";
      exit(1);
    }
    getch();			 //暫停
    system("dir/ad");  //顯示目錄檔案
    getch();          //暫停
    stat = rmdir(DIRNAME);  //移除目錄
    if (stat==0)
      cout <<DIRNAME<<"目錄已刪除\n";
    else
    { perror("\n無法刪除目錄\n");
      exit(1);
    }
    getch();
}
