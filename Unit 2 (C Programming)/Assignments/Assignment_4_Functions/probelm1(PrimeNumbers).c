/*
 ============================================================================
 Name        : Functions assignment problem1.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : prime numbers in an interval
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char  PrimeNums(int);
int main(void) {
int num1,num2;
char return_val;

printf("Enter Interval Boundaries : ");
fflush(stdout);
scanf("%d%d",&num1,&num2);
fflush(stdin);

if(num1<num2){
	printf("prime numbers between %d and % d are : \t",num1,num2);
	fflush(stdout);
	for(int i =num1+1 ; i < num2 ; i++){

		return_val = PrimeNums(i);
		if(return_val==0){
			printf("%d\t",i);
			fflush(stdout);
		}

	}

}
else{printf("check boundaries\n");}
	return 0;
}
char PrimeNums(int num){
	char flag =0;
		for(int j = 2 ; j < num/2 ; j++)
		{
		if(num%j == 0){
			flag = 1;
			break;
		}

	}

		return flag;

	}



