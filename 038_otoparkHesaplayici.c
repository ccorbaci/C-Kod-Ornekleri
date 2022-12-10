#include <stdio.h>
#include <stdlib.h>

//Bir otoparkta saatlik ücretlendirme ;//
//0-4 saat 10 tl//
//5-8 saat 12 tl //
//9-12 saat 15 tl //
//13++ saat 20 tl //
//Klavyeden saat aralığını alarak ödenmesi gereken tutarı hesaplayan programı kodlayınız//

int main() {
	int saat;
		
	printf("Kac saat kalacaksiniz: ");
	scanf("%d",&saat);
	
	if(saat>0 && saat <=4)
	{
		printf("10 tl odeme yapin ");
	}
	if(saat>=5 && saat <=8)
	{
		printf("12 tl odeme yapin ");
	}
	if(saat>=9 && saat <=12)
	{
		printf("15 tl odeme yapin ");
	}
	if(saat>=13)
	{
		printf("20 tl odeme yapin ");
	}
	
return 0;
}
