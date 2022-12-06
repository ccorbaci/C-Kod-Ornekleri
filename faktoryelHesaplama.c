#include <stdio.h>
#include <stdlib.h>

// Girilen bir sayının faktöriyelini hesaplayarak ekrana yazdırın. //

int main() {
	int i,number;
	int fac=1;
	
	printf("Faktoriel hesaplanacak sayiyi girin;\n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		fac=fac*i;
	}
	printf("Sonucunuz:%d",fac);

	return 0;
}
