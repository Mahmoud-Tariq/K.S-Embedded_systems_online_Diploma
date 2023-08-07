/*
 ============================================================================
 Name        : problem0.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : swap without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num1,num2;


	while(1){
    printf("enter two numbers to swap : ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d",&num1,&num2);
    printf("Before Swap\nFirst Number is : %d\nSecond Number is : %d\n",num1,num2);
    fflush(stdin);fflush(stdout);
    num1 = num1 ^ num2 ;
    num2 = num1 ^ num2 ;
    num1 = num1 ^ num2 ;

    printf("After Swap\nFirst Number is : %d\nSecond Number is : %d\n",num1,num2);
    fflush(stdin);fflush(stdout);
	}


	return 0;
}


