//ortalma ve mod
#include <stdio.h>

int main(void)
{
	int s,s1;

  printf("1.Sayiyi giriniz : ");
	scanf("%d",&s);
  printf("2.Sayiyi giriniz : ");
  scanf("%d",&s1);
	printf("Ortalama: %.2f",(s+s1)/2.0);
	return 0;
}
