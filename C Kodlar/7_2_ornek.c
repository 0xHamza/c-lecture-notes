//strcat(),strcpy(),strcmp() kullanim
#include<stdio.h>
#include <string.h>
int main()
{
  char a[50],b[50],c[50],d[50];
  char buyuk[]=" > ";
  strcpy(a,"hamza");
  strcpy(b,"ziya");

  if(strcmp(a,b)>0)strcpy(d,a);else strcpy(d,b);
  strcat(d,buyuk);
  if(strcmp(a,b)<0)strcpy(c,a);else strcpy(c,b);
  strcat(d,c);

  printf("Alfabetik olarak buyuk olan: %s\n",d);

  return 0;
}
