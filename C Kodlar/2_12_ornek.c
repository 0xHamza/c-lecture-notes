//switch-case ile toplama, cikarma, capma,bolme, kare alma, mod alma, iceren menulu hesap makinesi.
#include <stdio.h> 
int main(void)
{
	float x,y; 
	int secim=0;
	
	printf("MENU\n[1]Toplama\n[2]Cikarma\n[3]Carpma\n[4]Bolme\n[5]Kare Alma\n[6]Mod Alma\nSeciminiz: ");
	scanf("%d",&secim);

	switch(secim)
	{
		case 1:
			printf("1.Sayiyi Giriniz: ");
			scanf("%f",&x);
			printf("2.Sayiyi Giriniz: ");
			scanf("%f",&y);
			printf("Sonuc: %.2f",x+y);
			break;

		case 2:
			printf("1.Sayiyi Giriniz: ");
			scanf("%f",&x);
			printf("2.Sayiyi Giriniz: ");
			scanf("%f",&y);
			printf("Sonuc: %.2f",x-y);
			break;

		case 3:
			printf("1.Sayiyi Giriniz: ");
			scanf("%f",&x);
			printf("2.Sayiyi Giriniz: ");
			scanf("%f",&y);
			printf("Sonuc: %.2f",x*y);
			break;

		case 4:
			printf("1.Sayiyi Giriniz: ");
			scanf("%f",&x);
			printf("2.Sayiyi Giriniz: ");
			scanf("%f",&y);
			printf("Sonuc: %.2f",x/y);
			break;

		case 5:
			printf("Karesini almak istediginiz sayiyi giriniz: ");
			scanf("%f",&y);
			printf("Sonuc: %.2f",y*y);
			break;

		case 6:
			printf("Modunu hesaplamak istediginiz sayiyi giriniz: ");
			scanf("%f",&x);
			printf("Modunu yaziniz: ");
			scanf("%f",&y);
			printf("Sonuc: %d",(int)x % (int)y);
			break;

		default:
			printf("Yanlis secim, 1-6 arasi secim yapiniz.");
	}
	return 0;
}