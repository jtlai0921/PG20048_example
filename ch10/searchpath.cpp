//searchpath.cpp
#include <iostream.h>
#include <string.h>
#include <dir.h>
#include <conio.h>
void main(void)
{
    char *path;
    path = searchpath("NOTEPAD.EXE");
    cout <<"�O�ƥ��{��notepad.exe���Ҧb���|:"<< path<<endl;
    if (searchpath("ANYFILE.NOT")==NULL)
    strcpy(path,"�䤣��");
    cout <<"�ɮ�ANYFILE.NOT�����|:"<<path<<endl;
    getch();
}