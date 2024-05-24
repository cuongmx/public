#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <excpt.h>
void loi()
{
     char str[1000];
     gets(str);
     printf(str);
}
main()
{
      char a='a';
      while(a!='k')
      {
      printf("\nnhap:");                   
      loi();
      a=getch();
      }
      ExitProcess(1);
}
