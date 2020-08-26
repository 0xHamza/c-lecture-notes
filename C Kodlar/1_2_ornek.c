//Yorum satirlari:

// Bu bir tek satirlik yorumdur
// Bu sayede kodlarımızın ne ise yardigi hakkinda aciklama yapabiliriz

/*	bu ise coklu yorum
			satiridir daha fazla satiri yorum yapmak icin kullaniriz.*/

//Program Aciklma Yorum Satiri Ornekleri Kodu:

#include <stdio.h> 

int main() 
{
   printf("Merhaba Dünya!\n"); //Bu kod calisacaktir ve ekrana Merhaba Dunya! basilacaktir.
// printf("Merhaba Uzay!"); Ancak bu kod calismayacaktir cunku yorum satirlari arasinda kalmistir. Derleyici bu kod yokmus gibi hareket edecektir.
   printf("Merhaba Uzay!"); //Bu kod herhangi bir yorum satırı icinde olmadigindan calisacktir ve ekrana Merhaba Uzay! basilacaktir.
	
   return 0; 
}