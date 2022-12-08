#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,sayi;
	int dizi[100];
	int toplam=0;
	int ort=0;
	
	printf("Kac sayi toplatacaksiniz?  : ");
	scanf("%d",&sayi);
	
	for (i=0;i<sayi;i++)
	
	{
 	printf("Sayilarin %d. elemanini giriniz:  ",i+1);
	scanf("%d",&dizi[i]);
 	toplam=toplam+dizi[i];
	}
	
 	ort=toplam/sayi;
 
 	printf("toplam=%d\n",toplam);
 	printf("ort=%d",ort);
 	
 return 0;
 }
