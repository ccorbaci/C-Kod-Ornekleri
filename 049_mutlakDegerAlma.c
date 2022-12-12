#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen sayinin mutlak değerini aldiran programı kodlayiniz//

int main() {

	double sayi,sonuc;
	
	printf("Sayiyi Girin: ");
	scanf("%lf",&sayi);
	
	sonuc=fabs(sayi);
	
	printf("Sonuc: %.lf",sonuc);
	
	return 0;
}
