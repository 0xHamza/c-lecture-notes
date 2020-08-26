#include<stdio.h>
int main( void )
{
	struct {
		int yil;
		int ay;
		int gun;
	} siz, kiz_kardes, erkek_kardes;

	printf( "Doğum gününüzü giriniz> ");
	scanf( "%d-%d-%d",	&siz.gun,
				&siz.ay,
				&siz.yil );
	printf( "Kız kardeşiniz> " );
	scanf( "%d-%d-%d", 	&kiz_kardes.gun,
				&kiz_kardes.ay,
				&kiz_kardes.yil );
	printf( "Erkek kardeşiniz> " );
	scanf( "%d-%d-%d", 	&erkek_kardes.gun,
				&erkek_kardes.ay,
				&erkek_kardes.yil );
	return 0;
}
