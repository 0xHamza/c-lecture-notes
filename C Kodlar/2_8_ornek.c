//Mutlak hesabi if ile.
#include <stdio.h>
int main()
{	
	int sayi =0,mutlak=0;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);

	mutlak=sayi;
	if(sayi<0) mutlak=sayi*(-1);

	printf("%d sayisinin mutlagi: %d",sayi,mutlak);
	
	return 0;
}