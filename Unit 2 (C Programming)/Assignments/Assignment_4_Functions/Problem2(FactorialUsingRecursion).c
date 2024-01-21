/*
 ============================================================================
 Name        : Functions assignment problem2.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : factorial using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
long factorial( int num);
int main(void) {
	int num;
printf(" Enter any Positive number to get its factorial : ");
fflush(stdout);
scanf("%d",&num);
fflush(stdin);

if(num >=0){

	long return_val = factorial(num);
	printf("Factorial of %d is %ld",num,return_val);
	fflush(stdout);

}
else { printf("Negative numbers does not have a factorial");}
	return 0;
}
long factorial( int num){

	if(0 == num) return 1;
	if(num !=1){
return num*factorial(num-1);
	}



}
