//fonksiyn
#include <stdio.h>

void aciklama()
{
  printf("\n\n\n*********                     *********\n*****        Hesap Makinesi       *****\n*********                     *********");
  printf("\n[0] Cikis\n[1] Toplama\n[2] Cikarma\n[3] Carpma\n[4] Bolme\n[5] Us Alma\n[6] Faktoriyel\n[7] Menu");
}
void topla(float x, float y)
{
  if (x == (int)x & y == (int)y)
    printf("%d + %d Sonuc: %d",(int)y,(int)x,(int)y + (int)x);
  else
    printf("%f + %f Sonuc: %.2f",y,x,y+x);
}
void cikar(float x, float y)
{
  if (x == (int)x & y == (int)y)
    printf("%d - %d Sonuc: %d",(int)y,(int)x,(int)y - (int)x);
  else
    printf("%f - %f Sonuc: %.2f",y,x,y-x);
}
void carp(float x, float y)
{
  printf("(%f) * (%f) Sonuc: %.2f",y,x,y*x);
}
void bol(float x, float y)
{
  printf("(%f) / (%f) Sonuc: %.2f",y,x,y/x);
}
float faktoriyel(float x)
{
	if(x==0) return 1;
	return x*faktoriyel(x-1);
}
void usAlma(float y, float x)
{
	int i=0; float carpim=1;
	if(y!=(int)y)	printf("\nussunu tam sayi girmeliydiniz. us %f yuvarlanmistir: %d\n",y,(int)y);
	for(i=0;i<(int)y;i++) carpim *=x;
  printf("(%f) ^ (%f) Sonuc: %.2f",x,y,carpim);

}
int secim()
{

  int sec=-1;
  do{
    printf("\nSeciminiz: ");
    scanf("%d",&sec);
  }while(sec<0 || sec>7);
  return sec;
}
float sayiAl(int n)
{
  float s;
  printf("\n%d. Sayiyi giriniz: ",n);
  scanf("%f",&s);
  return s;
}
int main()
{
  aciklama();
  int cikis=0;
  float faktor=0;
  while(cikis==0)
  {
    switch(secim())
    {
      case 0: cikis = 1; break;
      case 1: topla(sayiAl(2),sayiAl(1));break;
      case 2: cikar(sayiAl(2),sayiAl(1));break;
      case 3: carp(sayiAl(2),sayiAl(1));break;
      case 4: bol(sayiAl(2),sayiAl(1));break;
      case 5: usAlma(sayiAl(2),sayiAl(1));break;
      case 6:
        while(faktor<1)
        {
          printf("\nFaktoriyel için 1 den buyuk sayi giriniz: ");
          scanf("%f",&faktor);
        }
        printf("\n%f! = %f",faktor,faktoriyel(faktor));
        faktor=0;
        break;
      case 7: aciklama(); secim(); break;
        default: break;
    }
  }
  return 0;
}
