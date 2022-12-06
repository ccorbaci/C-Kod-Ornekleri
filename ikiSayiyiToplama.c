#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,sum;
		
	printf("Please Enter The Number First; \n");
	scanf("%d",&number1);
	
	printf("Please Enter The Second Number; \n");
		scanf("%d",&number2);
	
	sum=number1+number2;
	
	printf("**The sum of the numbers you entered: **\n");
	printf("%d\n",sum);
	printf("******************");
	return 0;
}
