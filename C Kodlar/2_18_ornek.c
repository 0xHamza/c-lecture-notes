//faktoriyl
#include <stdio.h> 
int main() 
{
  int s=0,i=0,carpim=1;
  printf("Faktoriyelini hesaplamak istediginiz sayiyi girniz:");
  scanf("%d",&s);
  printf("%d! = ",s);

  for(i=0;s!=i;s--)
  {
    carpim*=s;
  }

  printf("%d",carpim);
  return 0; 
}