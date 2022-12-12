#include <stdio.h>
#include <stdlib.h>

//strlen fonksiyonu Örnek Çalışmasıdır.//

int main() {
	
	char kelime[100];
	
	printf("Kelimeyi Girin:");
	scanf("%s",&kelime);
		
	printf("Katar uzunlugu: %d",strlen(kelime));

	return 0;
}
