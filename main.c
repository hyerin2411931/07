#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  
  for (i=0;i<5;i++)
  {
      int temp =1; //���ϴ� ��(1,2,3,4,5) �������� static �ְų� for�� �ٱ��� temp���� ���� 
      printf("temp =%d\n", temp);
      temp++;
  } 
  system("PAUSE");	
  return 0;
}
