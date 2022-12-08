#include <stdio.h>
#include <stdlib.h>

//Döngüler kullanarak 5 yıldızdan oluşan her adımda 1 azaltan bir ücgen cizdirin//

int main(){
   int i,j;
     
   for(i=1;i<=5;i++)
   {
       for(j=5;j>=i;j--)
       {
           printf("*");
       }
       printf("\n");
   }


    return 0;
}
