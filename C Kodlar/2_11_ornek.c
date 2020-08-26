//Kullanicidan alinan iki saydan kuck veya buyuk olanini bulma.
#include <stdio.h>
int main()
{	
	int s1 =0;
	int s2 =0;
	printf("Arada bir bosluk birakarak iki sayiyi giriniz: ");
	scanf("%d %d",&s1,&s2);

	if(s1>s2)	printf("\n%d > %d",s1,s2);
	else if(s2>s1) printf("%d > %d",s2,s1);
	else printf("%d = %d",s1,s2);

	return 0;
}