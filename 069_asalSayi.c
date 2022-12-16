#include <stdio.h>
#include <stdlib.h>

int main()
{

int a=1;
int b;

scanf("%d",&b);

int flag=0;

while(a<b-1)
{
	a++;
	if(b%a==0)
	{
		flag=1;
		break;
	}	
}
if(flag==0)
	{
	printf("sayi asal");
	}
else
	{
	printf("sayi asal degil");
	}

return 0;
}
