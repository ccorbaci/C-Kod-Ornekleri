#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen taban degerine gore dik ucgen olusturun//

int main() {
	int i,j,taban;
	
	printf("Lutfen Taban Degerini girin: ");
	scanf("%d",&taban);
	
	for(i=1;i<=taban;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		
	return 0;
}
