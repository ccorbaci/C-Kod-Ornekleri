#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen sayinin logaritmasını aldiran programı kodlayiniz//

int main() {

	double sayi,sonuc;
	
	printf("Sayiyi Girin: ");
	scanf("%lf",&sayi);
	
	sonuc=log(sayi);
	
	printf("Sonuc: %.7lf",sonuc);
	
	return 0;
}
