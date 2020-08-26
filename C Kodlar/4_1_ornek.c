//pointerlar genel
#include <stdio.h>
int main()
{
  int x = 5;
  //int *p = &x;
  int *p;
  p = &x;
  printf("\nx=5 deiskeni ile yapilanlar:");
  printf("\nX degiskeni = %d(%cd -x)",x,'%');
  printf("\nx degiskenin adresi: %p(%cp - &x)", &x,'%');
  printf("\nx degiskenin adresinin icindeki deger: %d(%cd - *&x)", *&x,'%');
  printf("\nx degiskenin adresinin int hali %d(%cd - &x)", &x,'%');

  printf("\n\n\nint *p = &x; deiskeni ile yapilanlar:");
  printf("\n\np degeri,p nin isaretledigi adresin icindeki deger(x degiskeni) = %d (%cd - *p)",*p,'%');
  printf("\np adresi = %p(pointerin adresi) - %p(pointerın isaret ettigi adres) (%cp - &p - p)", &p,p,'%');
  printf("\np degiskenin adresinin int hali %d(%cd - p)", p,'%');

  x = 22;
  printf("\n\n\n\nint *p = &x; deiskeni ile yapilanlar (X degistirildi 22 yapildi):");
  printf("\nAdres x: %p\n", &x);
  printf("Deger x: %d\n\n", x);  // 22

  printf("Adres pointer p: %p\n", p);
  printf("Pointer p nin ici: %d\n\n", *p); // 22

  x = 11;
  printf("Adres pointer p: %p\n", p);
  printf("Pointer p nin ici: %d\n\n", *p); // 11

  *p = 2;
  printf("Adres x: %p\n", &x);
  printf("Deger x: %d\n\n", x); // 2

  return 0;
}
