#include <stdio.h>
#include <stdlib.h>

//Diziler Kullanarak faktoriyel hesaplatma//

int main() {
	int sayilar[]={1,2,3,4,5,6,7};
 	int faktoriyel=1;
 	int i;
 		for(i=6;i>0;i--)
 		{
 		faktoriyel=faktoriyel*sayilar[i];
		}
	printf("faktor = %d\n",faktoriyel);
	return 0;
}
