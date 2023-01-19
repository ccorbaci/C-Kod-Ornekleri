#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Random Number Generator//

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	unsigned int number1=rand();
	printf("number1\n%u",number1);
		
	return 0;
}
