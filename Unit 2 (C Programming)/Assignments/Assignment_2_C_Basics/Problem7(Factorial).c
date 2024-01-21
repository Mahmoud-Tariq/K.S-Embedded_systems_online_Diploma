/*
 ============================================================================
 Name        : problem7.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : Factorial (Overflow limit is put assuming 64 bit arch)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long long int factorial(int);

int main(void) {
	int input;

	while(1){
    printf("enter any valid number : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&input);
    if(input >= 0 && input < 21 )  printf("\nResult is : %lld \n",factorial(input));
    else if(input >=21) printf("result of this factorial exceeds limit, Enter lower number\n");
    else printf("\nCan't Calculate factorial of a negative number \n");
	}


	return 0;
}
long long int factorial(int num){
	long long int return_val=1;
	if(num ==0) return 1;

	while (num > 0){

		return_val *= num;
		num--;

	}
	return return_val;
}


