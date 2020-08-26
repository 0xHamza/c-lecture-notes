//carpim tablosu
#include <stdio.h> 
int main() 
{
  int j=0,i=0,carpim=1;

  for(i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
      printf("\t%d",i*j);

    printf("\n");
  }

  return 0; 
}