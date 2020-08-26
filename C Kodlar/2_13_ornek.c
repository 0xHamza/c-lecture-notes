//Uc basamakli sayinin basamklarini tespit etme
#include <stdio.h> 
int main(void)
{
	
	int sayi=0;
	int b1,b2,b3;
	printf("Uc basamakli sayiyi giriniz: ");
	scanf("%d",&sayi);

	if(sayi>99 && sayi<1000 || sayi<-99 && sayi>-1000)
	{
		b1=sayi%10;
		sayi/=10;
		b2=sayi%10;
		sayi/=10;
		b3=sayi;

		printf("\nBirler basamagi: %d\nOnlar basamagi: %d\nYuzler basamagi: %d",b1,b2,b3);

	}else printf("Uc basamakli sayi girmeniz gerekiyordu!");

	return 0;
}