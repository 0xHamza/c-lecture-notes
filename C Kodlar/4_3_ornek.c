//pointerlarla diziler yazdirma
#include <stdio.h>

int main()
{
  int dizi[5]={5,15,20,25,30};
  int*p, i,*d;

  d=dizi;
  printf("Pointer'a direk dizi(p=dizi) atayarak dizi yi yazdirma:\n");
  for(i=0;i<5;i++)
  {
    printf("%d. elemani %d - %p\n", i,*d,d);
    d++;
  }

  printf("\n\n\n");
  printf("Pointer'a dizi indisi(p=&dizi[0]) atayarak dizi yi yazdirma:\n");
  p=&dizi[0];
  for(i=0;i<5;i++)
    printf("%d. elemani %d - %p\n", i,*(p+i),p+i);
  return 0;
}
