/*
sringler tanimlama
string bastirma
*/
#include<stdio.h>
#include <string.h>
int main()
{
  char *ogrenciler[3]={"hamza","ahmet","ali"};
  for(int i=0;i<3;i++)
  {
    printf("%d - %s\t",i+1,ogrenciler[i]);
  }

  return 0;
}
