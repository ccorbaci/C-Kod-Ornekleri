#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	
	int h,m,s;
	int d=1000;
	
	printf("Set time: \n");
	scanf("%d%d%d",&h,&m,&s);
	
	if(h>12 || m>60 || s>60)
		{
			printf("ERROR!! \n");
			exit(0);
		}
	while(1)
	{
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>12)
		{
			h=1;
		}
		printf("\n Clock : ");
		printf("\n %2d : %2d : %2d",h,m,s);
		Sleep(d);
		system("cls");
	}
	
	return 0;
}