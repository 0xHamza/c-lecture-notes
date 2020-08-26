//if-else koşulunun koşulunu dışardan alarak farklı bir yapıda oluşturunuz.
#include <stdio.h>
int main()
{
	int a=10,b=27,c=34,d=10;

	int kosul1= (a==d && b>c); //kosullar dogru olmadigi icin 0 atanir
	int kosul2= (a!=d || c>b); //kosullarin sonucu true oldugu icin  1 atanir
	
	int kosul3= kosul1==kosul2; //1==0 olmadigindan 0 atacanak

	if(kosul3) printf("kosul true 1"); 
	else printf("kosul false 0");
	return 0;
}