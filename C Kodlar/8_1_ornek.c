/*
sqrt(sayi): karekok almaya yarar
pow(taban,us): us almaya yarar
floor(sayi): asagi yuvarlama
ceil(sayi): yukarı yuvarlama
fabs(sayi): mutlak
log(sayi): logaritma hesaplar
sin(derece): sinus hesaplar, radyan cinsinde dondurur, derece icin: aci*pi/180 yap
cos(derece): cos hesaplar,radyan cinsinde dondurur, derece icin: aci*pi/180 yap
*/
#include <stdio.h>
#include <math.h>
#define pi 3.14159265
int main()
{
  int s1,secim=-1;
  double taban,us,s,derece;
  double sonuc;
  while(secim<0 || secim>7)
  {


  while(secim<0 || secim>7)
  {
  printf("\n\n[0]Cikis\n[1]Karekok alma\n[2]Us alma\n[3]Yuvarlama\n[4]Mutlak\n[6]sin\n[7]cos");
  printf("\nIslem seciniz: ");
  scanf("%d",&secim);
  }
  switch (secim)
  {
    case 0:
      return 0;
      break;
    case 1:
      printf("Sayiyi giriniz: ");
      scanf("%lf",&s);
      printf("Sonuc %.5lf",sqrt(s));
      break;
    case 2:
      printf("Taban: ");
      scanf("%lf",&taban);
      printf("Us: ");
      scanf("%lf",&us);
      printf("Sonuc %.5lf",pow(taban,us));
    break;
    case 3:
      printf("Degeri girin: ");
      scanf("%lf",&s);
      printf("Asagi yuvarlama: %lf\nYukari yuvarlama %lf",floor(s),ceil(s));
    break;
    case 4:
      printf("Sayiyi girin: ");
      scanf("%lf",&s);
      printf("Sonuc |%lf| = %lf",s,fabs(s));
    break;
    case 5:
      printf("Sayiyi girin: ");
      scanf("%lf",&s);
      printf("Sonuc log(%lf) = %lf",s,log(s));
    break;
    case 6:
      printf("Aciyi girin: ");
      scanf("%lf",&s);
      derece=s*pi/180;
      printf("Sonuc sin(%lf) %lf derece ve %lf radyan",s,sin(derece),sin(s));
    break;
    case 7:
      printf("Aciyi girin: ");
      scanf("%lf",&s);
      derece=s*pi/180;
      printf("Sonuc cos(%lf) %lf derece %lf radyan",s,cos(derece),cos(s));
    break;
      default:
          printf("\nGecersiz secim...");

  }
  secim=-1;
}
  return 0;
}
