/*
 ============================================================================
 Name        : problem6.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : sum of natural numbers using user input limit
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int input,i,sum=0;

	while(1){
    printf("enter any number : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&input);
    for(i=0;i<=input;i++){
    	sum+=i;
    }
    printf("\nResult is : %d \n",sum);
	}


	return 0;
}
