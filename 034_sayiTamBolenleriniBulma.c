#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen sayının tam bölenlerini bulan programı kodlayın//

int main() {
	int sayi,i;
	
	printf("Bir Sayi Giriniz\n");
	scanf("%d",&sayi);
	
	for (i=1;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}
