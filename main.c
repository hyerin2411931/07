#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  
  for (i=0;i<5;i++)
  {
      int temp =1; //원하는 값(1,2,3,4,5) 나오려면 static 넣거나 for문 바깥에 temp변수 설정 
      printf("temp =%d\n", temp);
      temp++;
  } 
  system("PAUSE");	
  return 0;
}
