#include <stdio.h>
#include <stdlib.h>

//Klavyeden Girilen satır ve sutun sayısını yazdırın.Cıktı asagıdaki gibi olmalıdır.//
//Satir Sayisini Girin: 2
//Sutun Sayisini Girin: 2
//
// [1][1] --->10
//
// [1][2] --->20
//
// [2][1] --->30
//
// [2][2] --->40
//
//10 20
//30 40


int main() {
	
	int satir,sutun,i,j,k,n;
	
	printf("Satir Sayisini Girin: ");
	scanf("%d",&satir);
	
	printf("Sutun Sayisini Girin: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n [%d][%d] ---> ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	printf("\n");
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{			
			printf(" %d ",matris[k][n]);
		}
		printf("\n");
	}

return 0;
}
