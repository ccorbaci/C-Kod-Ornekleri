#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen sayini alta ve üste yuvarlayan programı kodlayiniz//

int main() {

	double sayi,sonucalt,sonucust;
	
	printf("Degeri Girin: ");
	scanf("%lf",&sayi);
	
	sonucalt=floor(sayi);
	sonucust=ceil(sayi);
	
	printf("Sonuc: %.2f\n",sonucalt);
	printf("Sonuc: %.2f",sonucust);
	
	return 0;
}
