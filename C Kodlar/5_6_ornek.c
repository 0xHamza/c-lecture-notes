//fnksiyonlar
#include <stdio.h>
void sirala(int *dizi,int n)
{
  int i,j, temp;
  for(i=1;i<n;i++)
  {
    for (j=0;j<10 - 1;j++)
    {
      if (*(dizi+j)>*(dizi+j+1))
      {
        temp=*(dizi+j);
        *(dizi+j)=*(dizi+1+j);
        *(dizi+j+1)=temp;
      }
    }
  }
}
void yazdir(int *dizi,int n,int secim)
{
  if(secim==1)
  {
    printf("\n Duz:");
    for(int i=0;i<n;i++)
      printf("\n%d. = %d",i,*(dizi+i));
  }else
  {
    printf("\n Ters:");
     for(int i=n-1;i>=0;i--)
        printf("\n%d. = %d",i,*(dizi+i));}

}
int toplam(int *dizi,int n)
{
  int toplam=0;
  for(int i=0;i<n;i++)
    toplam+=*(dizi+i);
  return toplam;
}
int main()
{
  int dizilar[5]={4,7,2,10,5};
  yazdir(&dizilar[0], 5,1);
  yazdir(&dizilar[0], 5,0);
  printf("\nToplam %d",toplam(&dizilar[0], 5));
  sirala(&dizilar[0], 5);printf("\nSiralandi.");
  yazdir(&dizilar[0], 5,1);
  yazdir(&dizilar[0], 5,0);
  printf("\nToplam %d",toplam(&dizilar[0], 5));
  return 0;
}
