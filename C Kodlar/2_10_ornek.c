//if else ile kullanicidan alinan ay numarasi ile o ayin ismini yazdirma:
//Switch case ifadesini else if e cevrime
#include <stdio.h> 

int main() 
{

	int ay=0;

	printf("Ay'in sayisal degerini yaziniz(1-12):");
	scanf("%d",&ay);

	if(ay==1)	printf("\nOcak");
	else if(ay==2)	printf("\nSubat");
	else if(ay==3)	printf("\nMart");
	else if(ay==4)	printf("\nNisan");
	else if(ay==5)	printf("\nMayıs");
	else if(ay==6)	printf("\nHaziran");
	else if(ay==7)	printf("\nTemmuz");
	else if(ay==8)	printf("\nAgustos");
	else if(ay==9)	printf("\nEylul");
	else if(ay==10)	printf("\nEkim");
	else if(ay==11)	printf("\nKasim");
	else if(ay==12)	printf("\nAraklik");
	else	printf("\nGecersiz giris 1-12 arasi sayi giriniz.");
		
   	return 0;
}