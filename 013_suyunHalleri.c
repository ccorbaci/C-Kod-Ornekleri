#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int degree;
	
	printf("*****Program Showing the Status of the Water******\n");
	printf("Enter the measured temperature value.:\n\n");
	
	scanf("%d",&degree);
	
	if(degree<=0)
	{
		printf("Water is in the form of ice.");
	}
	if(degree>0 && degree<100)
	{
		printf("Water is in liquid form.");
	}
	if(degree>=100)
	{
		printf("Water is gaseous.");
	}
		
	return 0;
}
