//metınde karakter bulma
#include <stdio.h>
int main()
{
  char metin[100];
  int indis[100];
  char aranan;
  int i,tekrar=0;

  printf("Metin giriniz:" );
  //scanf("%s", metin); BU SEKILDE ALINCA ARALARDAKI BOSLUGA KADAR ALIYOR GETS GIBI ALAMIYOR BU YUZDEN ALTTAKI ALTENATIFI BULDUM
  scanf("%[^\n]s", metin); //BU IFADE GETS e benzer sekilde ayni islemi yapiyor. gets gibi bolsuklar dahil karakterleir tutuyor
  scanf("%c",&aranan);
  printf("\nAradiginiz karakteri giriniz: ");
  scanf("%c",&aranan);


  for(i=0;metin[i]!='\0';i++)
  {
    if(metin[i]==aranan)
    {
      indis[tekrar]=i;
      tekrar++;
    }
  }
printf("Tekrar: %d",tekrar);
for(i=0;i<tekrar;i++)
{
  printf("\n%d.Tekrar: %d.Indis",i+1,indis[i]);
}
  return 0;
}
