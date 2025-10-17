#include <stdio.h>
#include <stdlib.h>

void f(void);
int i;

 
int main(int argc, char *argv[])
{
  for( i=0; i<5; i++)
  {
       f();
  }
  system("PAUSE");	
  return 0;
}

void f(void)
{
     for(i=0;i<10;i++)  
       printf("#");
}

//#이 50개가 아니라 10개만 찍힘 => i 전역변수라서, 50개 하려면 지역변수로 설정해줘야됨 
