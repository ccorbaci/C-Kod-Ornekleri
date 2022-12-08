#include <stdio.h>
#include <stdlib.h>

//Girilen 2*3 matrisini aşağıdaki gibi yazdırın//
//10 20 30
//40 50 60

int main() {
	
	int matris[2][3]={10,20,30,40,50,60};
	
	int satir,sutun;
	
	for(satir=0;satir<2;satir++)
	{
		for(sutun=0;sutun<3;sutun++)
		{
			printf("%d ",matris[satir][sutun]);
		}
		printf("\n");
		
	}
	
return 0;
}
