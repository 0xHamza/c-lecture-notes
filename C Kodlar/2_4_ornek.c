//Switch-Case yapisi ornek:

#include <stdio.h> 

int main() 
{
	int secim=0;
	printf("1-5 arasinda bir secim yapiniz: ");
	scanf("%d",&secim);

	switch(secim) 
	{
		case 1:
		case 2:
		case 3:
			printf("Seciminiz 1, 2, 3");
			break;
		case 4:
			printf("Seciminiz 4");
			break;
		case 5:
			printf("Seciminiz 5");
			break;
		default:
		printf("Seciminiz 1-5 arasinda olmaliydi gecersiz secim!");
		break;
	}

   	return 0;
}