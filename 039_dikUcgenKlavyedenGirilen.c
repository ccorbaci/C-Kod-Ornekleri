#include <stdio.h>
#include <stdlib.h>

//Taban sayisi klavyeden girilen dik üçgeni * sembolü ile çizdiren programı kodlayınız// 

int main() {
	
	int i,j;
	int taban;
	
	printf("taban giriniz: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
return 0;
}
