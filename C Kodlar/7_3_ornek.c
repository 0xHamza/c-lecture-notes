//kelime siralama
#include<stdio.h>
#include <string.h>
int main()
{
  int i, j,n;
  printf("Kac tane kelime siralamak istiyorsunuz:");
  scanf("%d",&n);
  char kelime[n][100], temp[20];

  for (i = 0; i < n; i++)
  {
    printf("\n%d.Kelime:",i);
    scanf("%s", kelime[i]);
  }

  for (i = 0; i < n-1; i++)
  {
    for (j = i+1; j < n; j++)
    {
      if (strcmp(kelime[i], kelime[j]) > 0)
      {
            strcpy(temp, kelime[i]);
            strcpy(kelime[i], kelime[j]);
            strcpy(kelime[j], temp);
      }
    }
  }

  printf("\nKucukten buyuge : ");
  for (i = 0; i < n; i++)
    printf("%s < ", kelime[i]);


  printf("\nBuyukten kucuge : ");
    for (i = n-1; i >-1; i--)
      printf("%s > ", kelime[i]);
  return 0;
}
