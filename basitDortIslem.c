#include <stdio.h>
#include <stdlib.h>

//switch-case kullanım alıştırma uygulaması//
//Klavyeden Girilen Sembole Göre (+-*/) 4 İşlem Yaptıran Uygulamayı Yapınız//

int main() {
	int sayi1,sayi2,toplam;
	char sembol;
	
	printf("***Merhaba 4 Islem Uygulamasına Hos Geldiniz..***\n\n");
	printf("***Lutfen Islem Yapmak Istediginiz Sembolu Giriniz***\n\n");
	scanf("%s",&sembol);
	
	printf("***Lutfen Ilk Sayiyi Giriniz***\n\n");
	scanf("%d",&sayi1);
	
	printf("***Lutfen Ikinci Sayiyi Giriniz***\n\n");
	scanf("%d",&sayi2);
	
				switch(sembol)
				{
				case '+':
					toplam=sayi1+sayi2;
					printf("Sonuc: %d",toplam);
					break;
				case '-':
					toplam=sayi1-sayi2;
					printf("Sonuc: %d",toplam);
					break;
				case '*':
					toplam=sayi1*sayi2;
					printf("Sonuc: %d",toplam);
					break;
				case '/':
					toplam=sayi1/sayi2;
					printf("Sonuc: %d",toplam);
					break;
				default:printf("Hatali Bir Sembol Girdiniz");
					break;
				}
	
	return 0;
}
