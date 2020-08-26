//Kullanicinin koronodan dolayi, yasinin disari cikip cikamayacaginin kontrolu.
#include <stdio.h>
int main()
{	
	int yas =0;
	printf("Yasinizi giriniz: ");
	scanf("%d",&yas);

	if(yas>0)
	{
		if(yas<21) printf("Malesef yasiniz cok kucuk sokaga cikamazsiniz. Acil durumlarda izin alabilirsiniz :)");
		else if(yas<65) printf("Sizin icin sokaga cikma yasagi yok. Ama cok dikkatli olmalisiniz...");
		else if(yas>64) printf("Malesef disari cikamazsiniz. Sagliginiz ve sevdikleriniz icin evde kalin.");
	}
	else printf("Yasinizi dogru giriniz.");
	return 0;
}