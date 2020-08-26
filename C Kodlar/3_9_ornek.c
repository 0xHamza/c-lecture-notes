/* metni tersten yazdirma */

#include <stdio.h>
#include <string.h>
int main(void)
{

	int i=0,j=0,x=0,boyut=0;
	char dizi[100]; //tamsayıarı tutacagımız dizi
  char orj_d[100]; //dizinin kopyasını alıyoruz

  printf("metin giriniz: ");
  gets(orj_d);
  boyut=strlen(orj_d);


	for(i=0;i<boyut;i++)
	{
	//buy_k[i]=dizi[i];
		dizi[i]=orj_d[boyut-1-i];
	}
printf("\n%s Tersten ",orj_d);
  for(i=0;i<boyut;i++)
	{
	//buy_k[i]=dizi[i];
		printf("%c",dizi[i]);
	}



	return 0;
}
