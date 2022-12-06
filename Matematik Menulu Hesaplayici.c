#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int secimNo;
		
	printf("Matematik Menusu\n");
	printf("****************\n");
	printf("1-Karede alan ve Cevre Hesaplatin\n");
	printf("2-Girilen Kupun Hacmini Hesaplatin\n");
	printf("3-Cemberde alan ve cevre hesabi\n");
	printf("4-Dikdortgen de alan ve cevre Hesaplatin\n");
	printf("5-Basit 4 Islem Hesaplama\n");
	printf("6-Sayi tek mi cift mi? \n");
	printf("7-Hangi Sayi Buyuk? \n");
	printf("8-Ideal Kilonuzu Hesaplatin \n");
	printf("****************\n");
	
	printf("Lutfen Menu Numarasi Girin\n");
	scanf("%d",&secimNo);
	
	switch (secimNo)
	{
		case 1:{
			printf("**Karede alan ve Cevre Hesaplatiya Hosgeldiniz**\n\n");
				int kenar,alan,cevre;
				printf("Lutfen Karenin Bir Kenarini Girin : ");
				scanf("%d",&kenar);
				alan=kenar*4;
				cevre=kenar*kenar;
				printf("Karenin Alani %d dir\n",alan);
				printf("Karenin Cevresi %d dir\n",cevre);
				break;
					}
		case 2:{
			int kenar;
			printf("**Kup Hacim hesaplaticiya hos geldiniz**\n\n");
			printf("**Lutfen Kupun Bir Kenarini Giriniz**\n\n");
			scanf("%d",&kenar);
			kenar=kenar*kenar*kenar;
			printf("**Girilen Kupun Alani %d dir",kenar);
			break;
		}
		case 3:{
			float pi,yariCap,cevre,alan;
			pi=3.14;
			printf("Cember Alan ve Cevre Hesaplaticiya Hos geldiniz\n");
			printf("Lutfen Cemberin yaricapini giriniz\n");
			scanf("%f",&yariCap);
			cevre=2*pi*yariCap;
			alan=pi*yariCap*yariCap;
			printf("**************\n");
			printf("Cemberin Alan: %f\n",alan);
			printf("Cemberin Cevresi: %f\n",cevre);
			printf("****************");			
			break;
		}
		case 4:{
			int kisaK,uzunK,cevre,alan;
			printf("Dikdortgen Alan ve Cevre Hesaplaticiya Hos geldiniz\n");
			printf("Lutfen Kisa Kenari Giriniz\n");
			scanf("%d",&kisaK);
			printf("Lutfen Uzun Kenari Giriniz\n");
			scanf("%d",&uzunK);
			cevre=2*(uzunK+kisaK);
			alan=uzunK*kisaK;
			printf("Dikdortgenin alani %d dir\n",alan);
			printf("Dikdortgenin cevresi %d dir\n",cevre);			
			break;
		}
		case 5:{
				int sayi1,sayi2,sonuc;
				char islem;	
				printf("***Matematik Islemleri***\n");
				printf("*************************\n\n");	
				printf("Lutfen 4 Islem Sembolunu Girin: ");
				scanf("%s",&islem);		
				printf("Lutfen Ilk Sayiyi Girin: ");
				scanf("%d",&sayi1);	
				printf("Lutfen Ikinci Sayiyi Girin: ");
				scanf("%d",&sayi2);	
				switch(islem)
				{
					case '+':
					sonuc=sayi1+sayi2;
					printf("Sonuc: %d",sonuc);
					break;
					
					case '*':
					sonuc=sayi1*sayi2;
					printf("Sonuc: %d",sonuc);
					break;
					
					case '/':
					sonuc=sayi1/sayi2;
					printf("Sonuc: %d",sonuc);
					break;
					
					case '-':
					sonuc=sayi1-sayi2;
					printf("Sonuc: %d",sonuc);
					break;
		}
		case 6:{	
			int case6Sayi;
			printf("****Sayi Pozitif mi Ogrenme Uygulamasina Hosgeldiniz****\n");
			printf("****Lutfen Bir Sayi Girin****\n");
			scanf("%d",&case6Sayi);	
			if (case6Sayi>=0){
				printf("Sayi pozitiftir");
				}
				else
				{
				printf("Sayi Negatiftir");
				}
			break;		
				}
		case 7:{
			int sayi1Case7,sayi2Case7;
			printf("7-Hangi Sayi Buyuk Uygulamasina Hos Geldiniz? \n");
			printf("Lutfen Ilk Sayiyi Giriniz\n");
			scanf("%d",&sayi1Case7);
			printf("Lutfen Ikinci Sayiyi Giriniz\n");
			scanf("%d",&sayi2Case7);
			if(sayi1Case7>sayi2Case7)
			{
				printf("%d Sayisi %d Sayisindan Buyuktur",sayi1Case7,sayi2Case7);
			}
			else{
				printf("%d Sayisi %d Sayisindan Kucuktur",sayi1Case7,sayi2Case7);
			}
			break;
		}					
			
		}
		default:printf("Hatali Bir Rakam Girdiniz");
		}

	return 0;
}
