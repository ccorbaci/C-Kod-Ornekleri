#include <stdio.h>
#include <stdlib.h>

//strcpy-strncpy Örnek Çalışmasıdır.//

int main() {
	
	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	
	strcpy(kopya,kaynak);
	
	printf("%s\n\n",kopya);
	
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,3);
	
	//3 ifadedi ilk kaç karakterin kopyalanacagını verir//
	
	printf("%s",nereye);

	return 0;
}
