//Mutlak hesabi ? ile.
#include <stdio.h>
int main()
{	
	int sayi =0;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);

	sayi = (sayi<0) ? sayi*(-1) : sayi;

	printf("Sayinin mutlagi: %d",sayi);
	
	return 0;
}