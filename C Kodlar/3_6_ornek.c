/* SAYISAL DIZIYI KUCUKTEN BUYUGE SIRALAMA - Hamza CELIK 191312016*/

#include <stdio.h>
int main(void)
{

	int i=0,j=0,x=0,boyut=0;
	int dizi[100]; //tamsayıarı tutacagımız dizi
  int orj_d[100]; //dizinin kopyasını alıyoruz
	int buy_k[100]; //buyukten kucuge sıralamayı tutacagımız dizi
	int kuc_b[100]; //kcuukten buyuge sıralamayı tutacagımız dizi

  do{
    printf("Kac tane sayiyi siralamak istersin(pozitif sayi girin): ");
    scanf("%d",&boyut);
  }while(boyut<0);



	for(i=0;i<boyut;i++)
	{
	 printf("\n%d. Sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}


	for(i=0;i<boyut;i++) orj_d[i]=dizi[i];

	for(i=0;i<boyut;i++)
	{
		for(j=0;j<boyut;j++)
		{
if(dizi[i]>dizi[j])
{
	x=dizi[i];
	dizi[i]=dizi[j];
	dizi[j]=x;
}
		}
	}

	for(i=0;i<boyut;i++)
	{
		buy_k[i]=dizi[i];
		kuc_b[i]=dizi[boyut-1-i];
	}

  printf("\n\nOrhinal Sira\n");
  for(i=0;i<boyut;i++)
  {
     printf("%4d",orj_d[i]);
  }
	printf("\n\nKucuktenB  \n");

	for(i=0;i<boyut;i++)
	{
	   printf("%4d",kuc_b[i]);
	}

	printf("\n\nBuyuktenK\n");
  for(i=0;i<boyut;i++)
  {
     printf("%4d",buy_k[i]);
  }
	return 0;
}
