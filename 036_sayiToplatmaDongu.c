#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen 4 adet sayiyi toplatan programı döngü içinde kodlayınız//

int main() {
	int i;
	int toplam=0;
	int sayi;
	
	for(i=1;i<=4;i++)
	{
		printf("%d. sayiyi giriniz: ",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("Toplam Sonuc: %d ",toplam);
return 0;
}
