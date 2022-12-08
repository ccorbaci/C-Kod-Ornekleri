#include <stdio.h>
#include <stdlib.h>

//Girilen 2*2 matrisini aşağıdaki gibi yazdırın
//10 20
//30 40 
int main() {
	
	int dizi[2][2];
	dizi[0][0];
	dizi[0][1];
	dizi[1][0];
	dizi[1][1];

	printf("0-0 elemanini girin\n");
	scanf("%d",&dizi[0][0]);
	
	printf("0-1 elemanini girin\n");
	scanf("%d",&dizi[0][1]);
	
	printf("1-0 elemanini girin\n");
	scanf("%d",&dizi[1][0]);
	
	printf("1-1 elemanini girin\n");
	scanf("%d",&dizi[1][1]);
	
	printf("Girilen Degerler\n\n");
	printf("%d ",dizi[0][0]);
	printf("%d\n",dizi[0][1]);
	printf("%d ",dizi[1][0]);
	printf("%d\n",dizi[1][1]);

	return 0;
}
