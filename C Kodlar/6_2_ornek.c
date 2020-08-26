//malloc ve calloc farkı
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int *ptrMallok, *ptrCallok, i,n;

  printf("Boyutu(eleman/indis miktarini) giriniz: ");
  scanf("%d",&n);
  ptrCallok = (int *) calloc (n, sizeof(int));
  if(ptrCallok!=NULL)
  {
    printf("Callok alani olusturuldu.");
    for(i=0;i<n;i++)
    {
      printf("\nCallok - %d.Indis degeri %d adresi %p",i,*(ptrCallok+i),ptrCallok+i);
    }
  }else printf("Callok alani olusturulumadi yetersiz bellek.");



  ptrMallok = (int *) malloc (n * sizeof(int));
  if(ptrMallok!=NULL)
  {
    printf("\n\n\nMallok alani olusturuldu.");
    for(i=0;i<n;i++)
    {
      printf("\nMalloc - %d.Indis degeri %d adresi %p",i,*(ptrMallok+i),ptrMallok+i);
    }
  }else printf("Mallok alani olusturulumadi yetersiz bellek.");

free(ptrMallok);
free(ptrCallok);
  return 0;
}
