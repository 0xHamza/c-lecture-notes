//pointerlarla diziler yazdirma ve tersten yazdirma
#include <stdio.h>

int main()
{
  int dizi[5]={5,15,20,25,30};
  int*p, i,*d;

  printf("\n\n\n");
  printf("duz:\n");
  p=&dizi[0];
  for(i=0;i<5;i++)
  printf("%d. elemani %d - %p\n", i,*(p+i),p+i);

  printf("\n\ntersten:\n");
  d=dizi+4;

  for(i=0;i<5;i++)
  {
    printf("%d. elemani %d - %p\n", 4-i,*(d-i),(d-i));
  }

  return 0;
}
