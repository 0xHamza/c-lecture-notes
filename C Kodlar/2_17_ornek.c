//Alinan sayiya kadar olan tek sayilari yazdirma
#include <stdio.h> 
int main() 
{
	int s=0,s2=0,i=0,j=0,bolenSayisi=0,buyuk=0,kucuk=0,toplam=0;
  	printf("Ilk sayiyi giriniz: ");
   	scanf("%d",&s);
  	printf("Ikinci sayiyi giriniz: ");
   	scanf("%d",&s2);
   	
   	buyuk = (s>s2) ? s:s2; //buyuk sayiyi bulduk
   	kucuk = (s<s2) ? s:s2; //kucuk sayiyi bulduk
   	i=kucuk+1;
   	//i dongude hep bir artilicak ve i buyuk sayiya esit oluncaya kadar devam edecek boylecea iki sayi arasindaki sayilari buluyoruz.
   	while(i!=buyuk)
   	{
   		//cift-tek olup olmadigini tespit ediyoruz
   		if(i%2==0) printf("\n%d Cifttir. Bolenleri: 1,",i); 
   		else printf("\n%d Tekdir. Bolenleri: 1,",i);

   		//bolen sayisini tutuyoruz ki kendisi ve birden baska boleni va mi anlayalim ve boylece asal olup olmadigini tespit edelim.
   		bolenSayisi=0;
   		for(j=2;j<=i;j++)//j'yi 2 den baslatarak elimizdeki sayiya kadar olan sayilari tespi ediyoruz
    	{
       		if(i%j==0) // ve tespit ettigimiz sayilarin asal olup olmadigini bulmak istedigimiz sayiya tam bolunup bolunmedigini sorguluyoruz
       		{
       			//tam bolerse ekrana boleni ni yazdiriyoruz ve sayaci da arttirioruz
       			printf(" %d,",j);
       			bolenSayisi++;
       		} 
        }  
        if(bolenSayisi==1) printf(" - Asaldir");//bolen sayimizi kontrol ediyoruz eger kend 1 den farklı ise kendisinde baska da boleni var demektir
        else printf(" - Asal degildir.");
        toplam+=i; //toplami bulmak icin toplam degiskenine her dongude araliktaki sayiyila topluyoruz
   		i++;
   	}
   	printf("\n%d-%d Arasi sayilarin toplami: %d",kucuk,buyuk,toplam);

   return 0; 
}