//pointerlarla matematiksel islemler(toplama cikarma bolme carpma)
#include <stdio.h>

int main()
{
  int vize=0,final=0, *pv,*pf;
  float *ort;
  printf("\nVize notu giriniz : ");
  scanf("%d", &vize);
  printf("\nFinal notu giriniz : ");
  scanf("%d", &final);
  pv=&vize;
  pf=&final;
  printf("Ortalama= %0.2f", ((*pv*0.4)+(*pf*0.6)));

  return 0;
}
