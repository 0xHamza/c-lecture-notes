//Alinan sayi kadar ekrana merhaba yazdiriniz.
#include <stdio.h>
int main()
{
	int s=0;
	printf("Sayiyi giriniz: ");
	scanf("%d",&s);

	int i=0;
	for(i;i<s;i++)
	{
		printf("Merhaba! ");
	}

	return 0;
}