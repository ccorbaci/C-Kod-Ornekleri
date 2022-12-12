#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int ticket,corn,water,cola,SUM;
	
	printf("******************* \n");
	printf("Hello.Pricing in our cinema is as follows:: \n\n");
	printf("Ticket Price: 20TL \n");
	printf("Corn: 2TL \n");
	printf("Water: 2TL \n");
	printf("Cola: 2TL \n");
	printf("******************* \n");
	
	printf("Enter the number of tickets you want to buy. \n\n");
	scanf("%d",&ticket);
	
	printf("Enter the number of corn you want to buy. \n\n");
	scanf("%d",&corn);
	
	printf("Enter the number of water you want to buy. \n\n");
	scanf("%d",&water);
	
	printf("Enter the number of cola you want to buy. \n\n");
	scanf("%d",&cola);
	
	SUM=ticket*20+corn*2+water*2+cola*2;
	
	printf("The Total Fee You Have to Pay. : \n");
	printf("%d",SUM);
	

	return 0;
}
