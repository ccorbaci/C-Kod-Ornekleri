#include <stdio.h>
#include <stdlib.h>

//C:\\Users\\ccorb\\Desktop\\asd\\Yeni klasör (6)\\test.txt dizininde yeni dosya oluşturma//

int main() {
	
	FILE *dosya;
	dosya=fopen("C:\\Users\\ccorb\\Desktop\\asd\\Yeni klasör (6)\\test.txt","w");
	
	putc('a',dosya);
	
	return 0;
}
