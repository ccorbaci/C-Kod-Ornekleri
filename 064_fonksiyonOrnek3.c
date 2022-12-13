#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen sayinin küpünü bulan fonksiyon içeren programı kodlayiniz.//

int kupbul(int sayi)
{
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}


int main() {
	
	int s;
	printf("Sayiyi Giriniz: ");
	scanf("%d",&s);
	printf("Sonuc : %d",kupbul(s));

	return 0;
}
