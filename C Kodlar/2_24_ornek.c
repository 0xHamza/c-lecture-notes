//Sayinin basmakalarini tespit edip tersten yazdirma
#include <stdio.h>
int main() 
{
    int i=0,s=0, basamak=0,tersSayi = 0;
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &s);
    while (s != 0) 
    {
        i++;
        basamak = s % 10;
        printf("\n%d.Basamak: %d",i,basamak);
        tersSayi = tersSayi * 10 + basamak;
        s /= 10;
    }
    printf("\nTers sayi = %d", tersSayi);
    return 0;
}