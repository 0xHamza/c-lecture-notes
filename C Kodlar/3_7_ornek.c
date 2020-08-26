#include <stdio.h>
#include <string.h>
int main()
{
  char sifre[]="HaMza";
  char girilen[100];
  int i=0,n=0;//i kontrol degiskenimiz i 0 dan kucuk oldugu surece whiledan cıkılamyacak, n dogru karkter sayisiise uzunluk
  do{
    if(i<0)printf("\nHatali giris.Tekrar ");
    printf("\"HaMza\" Gordugunuz metini doggru bir sekilde girin: ");
    gets(girilen);n=0;
    for(int j=0;girilen[j]!='\0';j++)
    {
      if(girilen[j]==sifre[j]) n++;//iki dizininde belirtilen indisleri eşit ise n i arttırıyoruz
    }
    if(n==strlen(sifre)) i = 1;else i--;//eger n degeri sifre nin uzunlugu ile aynı ise whiledan cıkartıyoruz ki dogru girilmil demektir
  }while(i<=0);
  printf("Tebrikler basarili!");
  return 0;
}
