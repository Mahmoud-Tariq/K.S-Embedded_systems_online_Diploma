/*
 ============================================================================
 Name        : problem4.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : program to detect positive or negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	float data;
	while(1){

		printf("\nEnter any Number : ");
		fflush(stdin);fflush(stdout);
        scanf("%f", &data);
		(data==0) ? printf("zero is neither positive nor negative\n") : (data>0 ) ? printf("%f is positive number\n",data) : printf("%f is negative number\n",data);
	}


	return 0;
}
