#include <stdio.h>
#include <stdlib.h>

//put-gets kullanımı Örnek Uygulama//

int main() {
	
	char bilgi[40];
	printf("Bilgiyi Girin: ");
	gets(bilgi);
	printf("\n\n");
	puts(bilgi);
		
	return 0;
}
