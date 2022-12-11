#include <stdio.h>
#include <stdlib.h>

//Bir futbol takımının 10 haftalık maç istatistikleri 2,1,0,0,2,1,1,2,1,0 şeklindedir
//Bu dizide 2 ler galibiyetleri,1 ler mağlubiyetler 0 lar ise beraberlikleri belirtmektedir
//Bu takımın küme düşmemesi için 12 puan alması gerekmektedir.Verilenlere göre bu takım 10 hafta sonunda
//kümede kalıp kalmadığını puanı ile birlikte ekrana yazan programı yazınız
//Galibiyetlere 3 puan,maglubiyetlere 0 puan,beraberliklere 1 puan verilecektir.Dizi kullanınız.

int main() {
	int skor[10]={2,1,0,0,2,1,1,2,1,0};
	int i;
	int puan=0;
	
	for(i=0;i<10;i++)
	{
		if(skor[i]==2)
		{
			puan=puan+3;
		}
		if(skor[i]==0)
		{
			puan=puan+1;
		}
	}
	if(puan>=12)
	{
		printf("Puaniniz: %d ligde kaldiniz.",puan);
	}
	else
	{
		printf("Puaniniz: %d ust lıge gectınız.",puan);
	}
	
return 0;
}
