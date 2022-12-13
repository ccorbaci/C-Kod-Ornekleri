#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi=20;
	int *s=&sayi;
	
	//sayıyı ekrana yazdırma//
	
	printf("Deger: %d\n",sayi);
	
	//adresi ekrana yazdırma//
	
	printf("Deger Adres: %x\n",s);
	
	char harf='a';
	char *h=&harf;
	
	//harfi ekrana yazdırma//
	
	printf("Harf : %c\n",harf);
	
	//adresi ekrana yazdırma//
	
	printf("Harf Adres : %x",h);

	return 0;
}
