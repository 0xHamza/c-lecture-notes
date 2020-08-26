//strlwr,strupr,puts kullanim
#include<stdio.h>
#include <string.h>
int main()
{
  char kucuk[]="ben kucuk harf ile yazilmistim",buyuk[]="BEN BUYUK HARF ILE YAZILMISTIM";
  puts(kucuk);
  puts(buyuk);
  puts("\n");
  puts(strupr(kucuk));
  puts(strlwr(buyuk));

  return 0;
}
