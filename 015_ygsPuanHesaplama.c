#include <stdio.h>
#include <stdlib.h>

//ygs puan turu hesaplama//
//Türkçe : 1.999//
//Mat: 3.998//
//Sos: 2.999//
//fen:2.999//
//Taban : 100.160//

int main() {
	
	float turkish,math,sos,physics,base,SUM;
	base=100.1600;
	
	printf("**YGS Score Type Calculation Tool** \n\n");
	
	printf("Please Enter The Turkish Lesson Note: \n");
	scanf("%f",&turkish);
	
	printf("Please Enter The Math Lesson Note : \n");
	scanf("%f",&math);
	
	printf("Please Enter The Social Science Lesson Note : \n");
	scanf("%f",&sos);
	
	printf("Please Enter The Physics Lesson Note: \n");
	scanf("%f",&physics);
	
	SUM=(turkish*1.999)+(math*3.998)+(sos*1)+(physics*2.999)+base;
	printf("***Your YGS Score Is*** \n%f",SUM);
	
	
	return 0;
}
