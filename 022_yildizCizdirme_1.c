#include <stdio.h>
#include <stdlib.h>

//Döngüler kullanarak 5 yıldızdan oluşan her asdımda 1 arttıran bir ücgen cizdirin//

int main() {
	
	int adim,j;
	
	for(adim=1;adim<=5;adim++)	
	{
		for(j=1;j<=adim;j++)
		{
			printf("*");
		}
	printf("\n");	
	}
	return 0;
}
