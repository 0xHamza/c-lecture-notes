//strchr,strrchr kullanim
#include<stdio.h>
#include <string.h>
int main()
{
  char mesaj[]="Merhaba nasilsin?",*pBas,*pSon;
  pBas=strchr(mesaj,'a');
  pSon= strrchr(mesaj,'a');

  for(int i=0;i<strlen(mesaj);i++)
  {
    printf("\n%d - %c",i+1,mesaj[i]);
  }

  printf("\n\na harfi bastan %d, sonda ise %d. sirada bulunuyor.",pBas-mesaj+1,pSon-mesaj+1);

  return 0;
}
