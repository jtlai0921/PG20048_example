//searchpath.cpp
#include <iostream.h>
#include <string.h>
#include <dir.h>
#include <conio.h>
void main(void)
{
    char *path;
    path = searchpath("NOTEPAD.EXE");
    cout <<"記事本程式notepad.exe之所在路徑:"<< path<<endl;
    if (searchpath("ANYFILE.NOT")==NULL)
    strcpy(path,"找不到");
    cout <<"檔案ANYFILE.NOT之路徑:"<<path<<endl;
    getch();
}