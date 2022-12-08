#include <stdio.h>
#include <stdlib.h>

//Kullanıcıdan Alınan 3 adet sehir isminin alt alta listelenmesi//

int main() {
char sehir[2][15];
	int i,j;
	for(i=0;i<=2;i+=1)
	{
		printf("Girmek Istediginiz Sehri Yaziniz: ");
		scanf("%s",sehir[i]);
		
		}
       printf("Girdiginiz Sehirler:\n");
       
       for(j=0;j<=2;j++)
       {
       	printf("%s\n",sehir[j]);
	   }
	return 0;
}
