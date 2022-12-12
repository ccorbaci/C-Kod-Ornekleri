#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen sayinin sinus ve cosinusunu hesaplayan programı kodlayiniz//

int main() {

	double derece,sonucsin,sonuccos;
	
	printf("Dereceyi Girin: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	
	sonuccos=cos(derece);
	
	printf("Sonuc Sin: %lf\n",sonucsin);
	printf("Sonuc Cos: %lf",sonuccos);
	
}
