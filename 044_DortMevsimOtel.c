#include <stdio.h>
#include <stdlib.h>

//Heybeliada da bulunan yazılım evi otelinde kış mevsiminden 320 kişi kalmıştır.İlkbahar da kış mevsinin//
//dörtte biri,yaz mevsiminde ilkbaharın 8 katı ve sonbaharda yaz mevsiminin 10 da biri kadar kişi kaldığına göre//
//bu otelde 1 yıl içinde toplam kaç kişi kalmıştır,hesaplayınız.//

int main() {
	int kis=320;
	int ilkbahar;
	int sonbahar;
	int yaz;
	int toplam;
	
	ilkbahar=kis/4;
	yaz=ilkbahar*8;
	sonbahar=yaz/10;
	toplam=ilkbahar+sonbahar+yaz+kis;
	
	printf("Kis: %d\n",kis);
	printf("Ilk Bahar: %d\n",ilkbahar);
	printf("yaz: %d\n",yaz);
	printf("Son Bahar: %d\n",sonbahar);
	printf("Toplam: %d\n",toplam);

	return 0;
}
