#include <stdio.h>
#include <stdlib.h>

	enum sehirler
	{
		sifir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
	};


int main() {
	
	enum sehirler il;
	il=adana;
	printf("%d",il);
	
	return 0;
}
