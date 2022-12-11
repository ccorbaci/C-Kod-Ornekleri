#include <stdio.h>
#include <stdlib.h>

//Bir havayolu şirketi yolcuları için bagaj sınırlaması uygulanmaktadır.Her yolcunun el için 8//
//normal için 15 kg bagaj hakkı bulunmaktadır.Eger yolcular el haklarını geçerse kg basına 4 tl,normal//
//haklarını gecerse kg basına 5 tl odeme yapacaklardır.buna gore klavyeden el ve normal bagajlarının kg olarak ağırlığını//
//giren yolcunun ödemesi gereken bagaj ücreti ne kadardır hesaplayınız.//
//el ve normal hakları minimum deger altında girilirse tutarı negatif değil,0 kabul edilecek.//

int main() {
	int el;
	int normal;
	int normaltutar;
	int eltutar;
	int toplam;
	
	printf("El bagaj kg: ");
	scanf("%d",&el);
	
	printf("Normal bagaj kg: ");
	scanf("%d",&normal);
	
	if(normal<15)
	{
		normaltutar=0;
	}
	else
	{
		normaltutar=(normal-15)*5;
	}
	if(el<8)
	{
		eltutar=0;
	}
	else
	{
		eltutar=(el-8)*4;
	}
	
	toplam=normaltutar+eltutar;
	
	printf("Toplam ekstra odemeniz gereken tutar %d dir",toplam);
	
return 0;
}
