#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi
{
	char kitapad[20];
	char yazar[30];
	int fiyat;
	float puan;
};


int main() {
	
	struct kitapbilgi kb={"SekerPortakali","Vasconceulos",10,7.25};
	
	printf("Kitap Adi: %s\n",kb.kitapad);
	printf("Kitap Yazari: %s\n",kb.yazar);
	printf("Kitap Fiyati: %d\n",kb.fiyat);
	printf("Kitap Puani: %d\n",kb.puan);

	return 0;
}
