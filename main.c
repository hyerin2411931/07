#include <stdio.h>
#include <stdlib.h>

static int all_files;   //범위가 제한돼서 컴파일 오류 남 

extern void sub();
 
int main(int argc, char *argv[])
{
  sub();
  printf("%d\n", all_files);
  
  system("PAUSE");	
  return 0;
}

