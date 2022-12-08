#include <stdio.h>
#include <stdlib.h>

//Cok boyutlu diziler kullanarak 2 * 2 matris içinde sayılar yazdırın//

int main() {
	
	int dizi[2][2];
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;

	printf("0-0 elemani %d\n",dizi[0][0]);
	printf("0-0 elemani %d\n",dizi[0][1]);
	printf("0-0 elemani %d\n",dizi[1][0]);
	printf("0-0 elemani %d\n",dizi[1][1]);
	
	return 0;
}
