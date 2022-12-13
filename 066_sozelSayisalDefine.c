#include <stdio.h>
#include <stdlib.h>
#define puan 2.19
#define puan2 3.47


int main() {
	int turkce,matematik;
	float sozelPuan,sayisalPuan;
	
	printf("Turkce Netinizi Giriniz: ");
	scanf("%d",&turkce);
	
	printf("Matematik Netinizi Giriniz: ");
	scanf("%d",&matematik);
		
	sozelPuan=turkce*puan+matematik*puan2+50.25;
	sayisalPuan=turkce*puan+matematik*puan2+51.45;
		
	printf("Toplam Sozel Puaniniz: %5.2f\n ",sozelPuan);
	printf("Toplam Sayisal Puaniniz: %5.2f\n ",sayisalPuan);

	return 0;
}
