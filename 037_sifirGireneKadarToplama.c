#include <stdio.h>
#include <stdlib.h>

//Klavyeden 0 girilene kadar sayıları toplayan programı kodlayınız//

int main() {
	int i;
	int sayi;
	int toplam=0;
		
	while(sayi!=0)
	{
		printf("Sayi: ");
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	
	printf("%d",toplam);
	
	
return 0;
}
