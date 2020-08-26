//alinan sayinin rakamlarını okuma
#include <stdio.h> //Standart giris cikis kutupahnemizi ekledik

int main()
{
	int i; //dongude for da kullanabilmek icin i diye degisken olsutruk

	/* version 1 diziyi biz belirlemiştik

	int sayi[] = {5,7,4,3,0}; //sayilarimizi dizimize attık

	*/

	//version 2 sayiyi kullanidan aldik
	char sayi[100];
	printf("Sayinizi giriniz: ");
	scanf("%s",&sayi);


	for (int i = 0; sayi[i] != '\0' ; i++)
	{
		if (sayi[i]== '0')
		{
			printf("\n sifir");

		}else if (sayi[i]== '1' )
		{
			printf("\n bir");

		}else if (sayi[i]== '2' )
		{
			printf("\n iki");

		}else if (sayi[i]== '3' )
		{
			printf("\n uc");

		}else if (sayi[i]== '4' )
		{
			printf("\n dort");

		}else if (sayi[i]== '5' )
		{
			printf("\n bes");

		}else if (sayi[i]== '6' )
		{
			printf("\n alti");

		}else if (sayi[i]== '7' )
		{
			printf("\n yedi");

		}else if (sayi[i]== '8' )
		{
			printf("\n sekiz");

		}else if (sayi[i]== '9' )
		{
			printf("\n dokuz");

		}
	}



	return 0;
}
