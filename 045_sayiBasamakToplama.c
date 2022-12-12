#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen 3 basamakli bir sayinin rakamları toplamını bulan uygulamayı kodlayiniz//

int main() {
	int birler,onlar,yuzler,toplam,sayi;
	
	printf("Sayiyi Girin: ");
	scanf("%d",&sayi);
	
	birler=sayi%10;
	onlar=(sayi/10)%10;
	yuzler=sayi/100;
	
	toplam=birler+onlar+yuzler;
	
	printf("Sayi basamaklari Toplami: %d",toplam);
	

	return 0;
}
