#include <stdio.h>

void kelimebul(char *dizi)
{
  int i=0, uzunluk=0;

  for(i=0;*(dizi+i)!='\0';i++); uzunluk=i;
  for(i=0;i<uzunluk;i++)
      printf("%d)%c\t",i+1,*(dizi+i) );
  printf("\nToplam %d karkater icerir",uzunluk );
}

int main()
{
  char *dizi[100] ;
  *dizi="Merhaba, ben hamza nasilsin?";
  kelimebul(*dizi);
  return 0;
}
