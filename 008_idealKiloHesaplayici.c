#include <stdio.h>
#include <stdlib.h>
//(boy - 100 + yas / 10)*0.6 kadın
//(boy - 100 + yas / 10)*0.8 erkek

int main() {

char gender;	
	
	
	printf("Ideal Weight Calculator\n");
	printf("\n\n");
	printf("Please Enter The Gender? M/F\n");
	scanf("%c",&gender);
	printf("Your Gender Is\n");
	
	printf("%c\n",gender);
	float size,age,ideal;
	
	size=165;
	age=24;
	if(gender='e')
	{
		ideal=(size-100+age/10)*0.8;
	}
	else	
	{
		ideal=(size-100+age/10)*0.6;
	}
	
	printf("Your Ideal Weight:%f\n",ideal);
	
	scanf("%f",ideal);
	
	
	return 0;
}
