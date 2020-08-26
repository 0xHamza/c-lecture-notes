#include <stdio.h>

int goster(int *x)
{
  *x+=10;
  return *x;
}

int topla(int x,int y) //hem fonksiyonu hem icerigini tek yerde tanimladik
{
  return x+y;
}


int main()
{
  int a,b,sonuc,*ptr;

  printf("Toplama Fonksiyonu Birinci sayiyi giriniz: ");
  scanf("%d",&a);
  printf("Toplama Fonksiyonu Ikinci sayiyi giriniz: ");
  scanf("%d",&b);

  sonuc = topla(a,b); //bu sekilde ise fonksiyonumuzu kullandik
  printf("\nSonuc %d",sonuc);

  printf("\nSayiyi giriniz: ");
  scanf("%d",&a);
  ptr=&a;
  printf("\nDegismeden *ptr nin degeri %d",*ptr);
  printf("\nDegismeden a nin degeri %d",a);

  printf("\nPointerin degerini degistirdikten sonra *ptr nin degeri %d",goster(ptr));
  printf("\nPointerin degerini degistirdikten sonra a nin degeri %d",a);
  return 0;
}
