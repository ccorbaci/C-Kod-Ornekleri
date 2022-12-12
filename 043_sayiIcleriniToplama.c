#include <stdio.h>
#include <stdlib.h>

//Klavyeden birbirinden farklı 2 sayi girilmesini sağlayan ve bu iki sayı arasındaki-bu iki sayi dahil//
//tamsayıların toplamını hesaplayan programı kodlayınız..//

int main() {
	
	int sayi1,sayi2,buyuk,kucuk,i,toplam=0;
	
	yeniden:
		
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	
	if(sayi1==sayi2)
	{
		goto yeniden;
	}
	else
	{
		if(sayi1>sayi2)
		{
			buyuk=sayi1;
			kucuk=sayi2;
		}
		else
		{
			kucuk=sayi1;
			buyuk=sayi2;
		}
	}
	for(i=kucuk;i<=buyuk;i++)
	{
		toplam=toplam+i;
	}
	
	printf("Toplam: %d",toplam);

	
	return 0;
}
