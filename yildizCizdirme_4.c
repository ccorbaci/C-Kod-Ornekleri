#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen en ve boy değerlerine göre dikdörtgen oluşturun//

int main(){
	
	int en,boy,i,j;
	
	printf("Lutfen Dikdortgen En Giriniz: ");
	scanf("%d",&en);
	
	printf("Lutfen Dikdortgen Boy Giriniz: ");
	scanf("%d",&boy);
	
	for (i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}

  return 0;
}
