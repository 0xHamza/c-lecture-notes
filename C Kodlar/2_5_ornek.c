//switch case ile kullanicidan alinan ay numarasi ile o ayin ismini yazdirma:

#include <stdio.h> 

int main() 
{


	int ay=0;

	printf("Ay'in sayisal degerini yaziniz(1-12):");
	scanf("%d",&ay);

	switch(ay)
	{
		case 1: 
			printf("\nOcak");
			break;

		case 2: 
			printf("\nSubat");
			break;
	
		case 3: 
			printf("\nMart");
			break;

		case 4: 	
			printf("\nNisan");
			break;

		case 5: 
			printf("\nMayıs");
			break;

		case 6: 
			printf("\nHaziran");
			break;

		case 7: 
			printf("\nTemmuz");
			break;

		case 8: 
			printf("\nAgustos");
			break;

		case 9: 
			printf("\nEylul");
			break;

		case 10: 
			printf("\nEkim");
			break;

		case 11: 
			printf("\nKasim");
			break;

		case 12: 
			printf("\nAraklik");
			break;

		default:
			printf("\nGecersiz giris 1-12 arasi sayi giriniz.");
			break;

	}
   	return 0;
}