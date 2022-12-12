#include <stdio.h>
#include <stdlib.h>

//Sayi karekökünü bulan uygulamayı kodlayınız//

int main() {

	int sayi;
	double sonuc;

	printf("Sayiyi Girin: ");
	scanf("%d",&sayi);
	
	sonuc=sqrt(sayi);
	
	printf("Sonuc: %f",sonuc);

	return 0;
}
