//kare matris
#include <stdio.h>
int main (void)
{
	int i=0,j=0;
	int x = 3;//Kat sayi deger sonradan degisecek
	printf("Matrix boyutunu giriniz: ");
	scanf("%d",&x);
	int a[x][x];//Matrixin kare formati degeri mesela x 3 olsaydi 3 e 3 bir kare icine 0 1 yazardi
	printf("\n");
	printf("\n");
 for(i=0;i<x;i++)//Dikey
	{

		for(j=0;j<x;j++)//Yatay
		{
if(i+j==x-1)
{
	a[i][j]=1;
}else{

	a[i][j]=0;

}
printf("%d ",a[i][j]);

		}
		printf("\n");

	}


	return 0;
}
