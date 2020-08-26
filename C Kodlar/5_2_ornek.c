//pointer ve fonksiyon
#include <stdio.h>

void kareal(int *sayi)
{
  *sayi=(*sayi) * (*sayi);
}

void kareal2(int sayi)
{
  sayi = sayi*sayi;
}

int main()
{
  int s,s1;
  printf("Sayiyi giriniz: ");
  scanf("%d",&s);

  kareal(&s);
  printf("Pointer sayesinde girilen sayinin karesi: %d",s);

  printf("\nSayiyi giriniz: ");
  scanf("%d",&s1);

  kareal2(s1);
  printf("Pointer kullanmadan girilen sayinin karesi: %d",s1);

  return 0;
}
