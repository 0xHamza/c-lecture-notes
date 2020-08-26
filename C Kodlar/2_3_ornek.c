//if-else basit ile ehliyet kontrol:

#include <stdio.h> 

int main() 
{
	int yas=0;

	printf("Yasinizi giriniz: ");
	scanf("%d",&yas); 
	if(yas<18) printf("Yasiniz ehliyet almak cok kucuk :/. Uzulmeyin %d sene sonra alabilirsiniz :). ",18-yas);
   	else printf("Yasiniz ehliyet almak icin uygun, Hayirli olsun :)...");
   
   	return 0;
}