//kullanicidan sayisal degeri alinan ayin hangi mevsime ait oldugunu yaziniz.

#include <stdio.h> 

int main() 
{


	int ay=0;

	printf("Ay'in sayisal degerini yaziniz(1-12):");
	scanf("%d",&ay);

	switch(ay)
	{

		case 12: 
		case 1: 
		case 2: 
			printf("\nKis mevisimindesiniz. Aman kalin giyininde usutmeyin :)");
			break;
		case 3: 
		case 4: 	
		case 5: 
			printf("\nIlkbahar mevisimindesiniz. Kelebekleeer :)");
			break;
		case 6: 
		case 7: 
		case 8: 
			printf("\nYaz mevisimindesiniz. Bahamalarda bir tatili hakettin hadi gene iyisin :)");
			break;

		case 9: 
		case 10: 
		case 11: 
			printf("\nSonbahar mevisimindesiniz. Uuuu sogumaya ni basladi ne?");
			break;

		default:
			printf("\nGecersiz giris 1-12 arasi sayi giriniz.");
			break;
	}
   	return 0;
}