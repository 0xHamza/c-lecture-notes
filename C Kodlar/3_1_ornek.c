//Dısarda n tane ders ismini alınız ve tutunuz o derse ait vize ve final notlarını tutunuz ve ortalamasını da ayrıca tutup en son çıktısını verin.
#include <stdio.h>
int main()
{
  int dizi2[5] = {5,81,9,-15,7};//dizi tanimlama
  printf("\nIlk olsuturulan Dizi: 0.Indis: %d 1.Indis: %d 2.Indis: %d 3.Indis: %d 4.Indis: %d",dizi2[0], dizi2[1], dizi2[2],dizi2[3],dizi2[4]);//dizi gosterme
  //diziyi sonradan düzenleme
  dizi2[0] = 11;
  dizi2[1] = 4;
  dizi2[2] = 52;
  printf("\nDegistirilmis Dizi: 0.Indis: %d 1.Indis: %d 2.Indis: %d",dizi2[0], dizi2[1], dizi2[2]);//yeni dizi

  printf("\nDizinin son hali:");
  for (int i = 0; i<5; i++)
    printf("\ndizi2[%d] = %d", i, dizi2[i]);


  int dizi[3];
  printf("\n\nYeni dizinin indislerini giriniz:");

  for (int i = 0; i< 3; i++)
  {
    printf("\ndizi[%d] giriniz:", i);
    scanf("%d",&dizi[i]);
  }

  for (int i = 0; i<3; i++)
    printf("\nGirilen dizi[%d] = %d", i, dizi[i]);

  return 0;
}
