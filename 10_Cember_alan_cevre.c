#include <stdio.h>
#include <stdlib.h>

			float pi,yariCap,cevre,alan;
			pi=3.14;

			printf("Cember Alan ve Cevre Hesaplaticiya Hos geldiniz\n");
			printf("Lutfen Cemberin yaricapini giriniz\n");
			scanf("%f",&yariCap);
			cevre=2*pi*yariCap;
			alan=pi*yariCap*yariCap;
			printf("**************\n");
			printf("Cemberin Alan: %f\n",alan);
			printf("Cemberin Cevresi: %f\n",cevre);
			printf("****************");	
	return 0;
}
