//#undef onislemci direktifi:

//BU KOD BİLEREK HATALI YAZİLDİ
#include <stdio.h>
#define sayi 33 
int main()
{
	printf("sayi’nin degeri: %d",sayi); 
	//sayiyi ekrana basacaktir
	
	#undef sayi 
	//artik sayi tanimi yok
     	
	printf("sayi’nin tanimsiz degeri: %d",sayi);
	return 0;
}
