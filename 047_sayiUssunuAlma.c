#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen sayinin üssünü alan uygulamayı kodlayınız//

int main() {

	int x,y;
	int sonuc;
	
	printf("Tabani Girin: ");
	scanf("%d",&x);
	
	printf("Ussu Girin: ");
	scanf("%d",&y);
	
	sonuc=pow(x,y);
	
	printf("Sonuc: %d",sonuc);
	
	
	return 0;
}
