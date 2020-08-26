//
#include <stdio.h>
int main()
{

  float notlar[30][3]; //notlar dizisi
  char dersler[30][10]; // dersler dizisi
  int n,i,j;

printf( "Kac tane ders girisi yapacaksiniz: ");
scanf( "%d", &n );
//derslerin isimlerini aldik
for (i = 0; i < n; i++)
{
  printf("\nDers Isim giriniz: ");
  scanf( "%s", dersler[i] );
}

//deslerin not girislerini notlar dizisine atiyoruz
  for(i=0;i<n;i++)
  {

    printf("\n%s Dersinin VIZE notunu giriniz: ",dersler[i]);
    scanf("%f",&notlar[i][0]);
    printf("\n%s Dersinin FİNAL notunu giriniz: ",dersler[i]);
    scanf("%f",&notlar[i][1]);
    notlar[i][2]=notlar[i][0]*0.40 + notlar[i][1]*0.60;
  }

  for(i=0;i<n;i++)
  {
    printf("\n%s Vize: %f Final %f Ortalama %f",dersler[i],notlar[i][0],notlar[i][1],notlar[i][2]);
  }

  return 0;
}
