//file_05.cpp
#include <fstream.h>
#include <string.h>
void main()
{ char str[]="The difference between you and I is that\n"
				"I understand the difference between virtue\n"
            "and nonvituues.";
  ofstream outfile("cdata.txt");
  for (int i=0;i<strlen(str);i++)
  outfile.put(str[i]);
}  