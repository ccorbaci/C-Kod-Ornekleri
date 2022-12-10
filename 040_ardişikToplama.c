#include <stdio.h>
#include <stdlib.h>

//1+5+9+13...81 dizisinin toplamını bulan programı kodlayın//

int main() {
	int i;
	int toplam=0;
	
	for (i=1;i<=81;i+=4)
	{
		toplam=toplam+i;
	}
	printf("toplam %d",toplam);
	
return 0;
}
