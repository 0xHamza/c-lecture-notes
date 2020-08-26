//METİN ALIP harf harf yazdırma ve ascii lerini gosterme
#include <stdio.h>
int main()
{
  char metin[100];
  int i;

  printf("Metin giriniz:" );
  //scanf("%s", metin); BU SEKILDE ALINCA ARALARDAKI BOSLUGA KADAR ALIYOR GETS GIBI ALAMIYOR BU YUZDEN ALTTAKI ALTENATIFI BULDUM
  scanf("%[^\n]s", metin); //BU IFADE GETS e benzer sekilde ayni islemi yapiyor. gets gibi bolsuklar dahil karakterleir tutuyor
  printf("\nHarf - Ascii");
  for(i=0;metin[i]!='\0';i++)
  {
    printf("\n%c - %d",metin[i],metin[i]);
  }

  return 0;
}
