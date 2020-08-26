#include <stdio.h>
int main (void)
{
	int satir=0,girilensayi=0,bosluk=0,yildiz=0,i=0;
	int olmasigerekenyild=1;
	int y =olmasigerekenyild;
	
	printf("\nTek bir sayi giriniz: ");
	scanf("%d",&girilensayi);
	printf("\n");
	
	//Kullanici tek bir sayi giresiye kadar 9999 kere hak taniyip tek sayi girmesini istioyrum
	for (i=0; i<9999;i++)
	{
		if(girilensayi%2==0)
		{

			printf("\nTek bir sayi giriniz: ");
			scanf("%d",&girilensayi);
			printf("\n");

	}else
	{
		//Kullanici tek sayi girince donguden cikariyorum
		i=10000;
		
		//Satir kismi icin en uste bu for u olusturdum.
		//Artik yazilan sayi kadar altalta satir olusturlucak
		for(satir=1;satir<=girilensayi;satir++)
		{
			//olusturacagim bosluk sayisini bulan bir formul yaptim ve atadim
			int olmasigerekenbos = ((int)girilensayi/2+1)-satir;
			//BU FORMULU ZATEN DERSTE BULMUSTUM, BU PROGRAMDAKİ BUTUN KODLAR TAMAMEN BANA AİT HİCBİRYERDEN HİCBİR SEY E BAKMADİM...

			//simdi buraya kadar formul pozitif cikiyordu ama en orta satirdan sonra formul negatif cikiyor bunun icin isaretinin tersini aliyorum
			if (olmasigerekenbos<0)
			    olmasigerekenbos=-olmasigerekenbos;

			//Artik bulunulan satira formul ile buldugum eklemem gereken bosluklari ekleyiyorum
			for(bosluk=1;bosluk<=olmasigerekenbos;bosluk++) printf(" ");


			//Bosluktan sonra gelecek olan yildizlari ilk basta 1i atadigim yildiz sayisinj belirtren 'y' degiskeni kadar yildiz ekliyecwk

			for(yildiz =1;yildiz<=y;yildiz++) printf("*");
			//bu sefer en orta satira kadar yildizlari arttirarak, orta satiri gecince yildiz lari azaltarak devam ettirmek soyle bir if yaptim
			if (satir>(int)girilensayi/2)
			y= y-2;
			else y = y+2;
			//buraya kadar bulunulan satirda islem yaptik simdi islemler bitti bir alt satira geciriyorum
			printf("\n");
			}
		}
	}
	return 0;
}