#include <stdio.h>

void takas(int *x,int *y)
{
  int gecici;
  gecici = *x;
  *x=*y;
  *y=gecici;
}

int main()
{
  int x,y;
  printf("X degerini girin: ");
  scanf("%d",&x);

  printf("Y degerini girin: ");
  scanf("%d",&y);

  printf("\nX degeriniz: %d Y degeriniz: %d",x,y);

  takas(&x,&y);
  printf("\n\nTakas Yapildi\n\nX degeriniz: %d Y degeriniz: %d",x,y);
  return 0;
}
