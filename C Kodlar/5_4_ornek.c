//fonksiyon ile us alma
#include <stdio.h>

float usAlma(float x, float y)
{
	int i=0; float carpim=1;
	if(y!=(int)y)	printf("\nussunu tam sayi girmeliydiniz. us %f yuvarlanmistir: %d\n",y,(int)y);
	for(i=0;i<(int)y;i++) carpim *=x;

	return carpim;
}

int main()
{
  float t,u;
  printf("Taban: ");
  scanf("%f",&t);
  printf("Us: ");
  scanf("%f",&u);
  printf("\nSonuc: %.2f",usAlma(t,u));
  return 0;
}
