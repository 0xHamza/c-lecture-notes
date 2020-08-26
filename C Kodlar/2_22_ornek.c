//kullanicidan alinan sayinin n adet sayinin ortalamasi
#include <stdio.h>

int main(void)
{
	int s,toplam=0,i,n;

	printf("Kac tane sayinin ortalamasini hesaplamak istersiniz: ");
	scanf("%d",&n);

	for (i = 0; i < n; ++i)
	{
		printf("%d. Sayiyi giriniz: ",i+1);
		scanf("%d",&s);
		toplam+=s;
	}
	printf("Toplam: %d Adet: %d Ortalama: %f",toplam,i,((float)toplam/(float)i));

	
	return 0;
}