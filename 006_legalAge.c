#include <stdio.h>
#include <stdlib.h>

int main() {
	int age;
	
	printf("***How Old Are You?*** \n\n");
	scanf("%d",&age);
	
	if(age>=16)
	{
		printf("Your Age of Legal Age :) \n");
	}
	else
	{
		printf("You are not Legal Age :( \n");
	}
	
	return 0;
}
