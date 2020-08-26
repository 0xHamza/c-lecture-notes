//2lik sayi sistemini 10 luga cevirme
#include <stdio.h>
int main(void)
{
	int i=0,n=16,toplam=0,two=1,temp=-1;printf("SAYI SISTEMLERI 10 TABANINA DONUSTURME\n\tORNEK:\n\n  BIT:  1.2.3.4.5.6.7.8.9.10.11.12.13.14.15.16.\n\t^ ^ ^ ^ ^ ^ ^ ^ ^  ^  ^  ^  ^  ^  ^  ^\n\t| | | | | | | | |  |  |  |  |  |  |  |\n\n\t0 1 0 1 1 1 0 0 1  0  0  1  0  0  0  1\n\n\n\nSagdan sola dogru alt alta yaziniz.\n");			
	n=16;
	two=32768;
	for(i=0;i<n;i++)
	{
		while(temp!=0 && temp!=1)
		{
			printf("\n\t%d.Bit icin 0 veya 1 giriniz: ",i+1);
			scanf("%d",&temp);
		}
		toplam=toplam + (two*temp);
		two=two/2;
		temp=-1;
	}
	printf("\n10'luk: %d",toplam);
	return 0;
}