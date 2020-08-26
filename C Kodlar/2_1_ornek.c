//Onislemci direktifi ornek:

#include <stdio.h>

#define altagec '\n'
#define tab '\t'
#define unlem '!'
#define pi 3.141
#define sayi 32
#define cemberCevre(r) 2*pi*(r)
int main()
{
	printf("Hoooop%cassagidayim Hoooop tab%c aaaa unlem %c \n\n",altagec,tab,unlem );

	printf("Yaricapi 3 olan dairenin cevresi: %f\n",cemberCevre(3));

	#if((sayi%2)==0)
      printf("Sayi Cifttir\n");
	#else
      printf("Sayi Tektir\n");
	#endif

	return 0;
}