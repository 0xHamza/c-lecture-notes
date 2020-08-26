//Sabitler ve Degiskenler:

#include <stdio.h> 

//define sabiti 
#define PI 3.141
#define Boyut 10
#define topla(a, b) a+b

int main() 
{ 
	//const sabiti
	const int boyut = 10;

	//tam sayi tanimlama
    int tamSayi = 1; 

    //karakter tanimlama
    char karakter ='X'; 

    //karakter dizi tanimlama
    char dizi[Boyut] = "Dizi";
    //karakter dizisinin alani define sabitine ait olabilir ama const olmaz hata verir
    //char dizi2[boyut] = "Dizi2"; hata verir const almaz

    //ondalikli sayi tanimlama
    double ondalikli_1 = 5.48; 
    float ondalikli_2 = 5.48; 

    printf("Define sabiti ile PI sayisini tuttuk: %f\n",PI);
    printf("integer tipinde tamSayi degiskeninin degeri: %d\n",tamSayi);
    printf("const int tipinde boyut degiskeninin degeri: %d\n",boyut);
    printf("Define sabiti ile toplama islemini yaptirdik (int tamSayi + const int) boyut: %d\n",topla(tamSayi,boyut));
    printf("double tipinde ondalikli_1 degiskeninin degeri: %f\n",ondalikli_1);
 	printf("float tipinde ondalikli_1 degiskeninin degeri: %f\n",ondalikli_2);

  	printf("Bir tab\tbosluk birakma. Tek tirnak \' çift tirnak \" \n Alt satira inme. Uyari sesi \a \n\n");

    int a=1;

  	printf("Atama operatoru kullanim sekilleri: \nint a=1; a degiskenine 1 atadi ve a artik: 1 oldu.\na+=4; veya a=a+1; ile a degiskenini kendisi ve 1 ile topladi ve a artik %d oldu.",a+=4);
	a%=2;
  	printf("\na mod 2 = %d - a mod 2, a nin ikiye bolumunden kalani hesaplar",a);

  	printf("\n\na 1 iken a++ yapinca önce ekrana a yi %d basar ve bastıktan sonra a yı bir arttırır, a nın yeni degeri %d.",a++,a);
  	printf("\n\na 2 iken ++a yapinca önce a yı %d  bir arttırır sonra ekrana a yı %d basar, a nın yeni degeri %d.",++a,a,a);

  	printf("\na-=2 yaparsak a değişkeninin kendisinden 2 çıkartı ve yeni a değeri: %d",a-=2);
  	printf("\na+= 9-1*4 yaparsak a değişkenini kendisi ile ve işlemin sonucu ile toplar ve sonuc: %d olur cunku operatorlerin onceliğine dikkat edilmeli carpmanin vardir c de",a+= 9-1*4);
    return 0; 
}