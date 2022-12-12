#include <stdio.h>
#include <stdlib.h>

//Dizi elemalarının toplamlarının yazdırıldıgı program ornegi//

int main() {
	int sayilar[]={10,15,20,35};
	int toplam=0;
	int i;
	
	
	for (i=0;i<4;i++)
	{
	toplam=toplam+sayilar[i];
	}
	printf("%d\n",toplam);	
	return 0;
}
