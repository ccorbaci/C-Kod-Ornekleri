#include <stdio.h>
#include <stdlib.h>

//pointer kullanarak adreslerde arttırma,azaltma gibi işlemler yapmak//

int main() {
	
	char harf='k';
	char *pt=&harf;
	
	printf("Adres 1: %x\n",pt);
	
	//adresi bir arttıralım//
	
	pt++;
	
	printf("Adres 2: %x\n",pt);
	
	//adresi bir azaltalım.Adres 2 nin bir eksigini alacaktır//
	
	pt--;
	
	printf("Adres 3: %x\n",pt);
	
	return 0;
}
