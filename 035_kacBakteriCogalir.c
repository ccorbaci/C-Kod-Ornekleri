#include <stdio.h>
#include <stdlib.h>

//Bir bakteri türü her saat başı kendini ikiye bölerek çoğalmaktadır.
//Bu labaratuarda 24 saat sonra kaç tane bakteri olur?//

int main() {
	int sayi=1;
	int i;
	
	for(i=1;i<=24;i++)
	{
		sayi=sayi*2;
	}
	
	printf("%d",sayi);
	return 0;
}
