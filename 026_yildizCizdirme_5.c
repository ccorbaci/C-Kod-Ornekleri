#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen taban degerine gore ucgen olusturun//

int main() {
	
	int i,j,k,l;
	printf("Lutfen Ucgenin Tabanını Giriniz:");
	scanf("%d",&l);
    
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=l-i;k>=0 && j==1;k--)
			{
				printf(" ");
			}
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
