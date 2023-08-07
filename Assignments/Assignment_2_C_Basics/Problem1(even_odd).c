/*
 ============================================================================
 Name        : assignment1.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : program to check number is even or odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int EvenOdd(int num);

int main(void) {
	int num,result;
	while(1){
	printf("Enter Number to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	result = EvenOdd(num);
	if(result == 1){printf("number %d is even\n",num);}
	else if(result == 0) {printf("number %d is odd\n",num);}

}

	return 0;
}

int EvenOdd(int num){

	   if(num%2 == 0) return 1;
	   else return 0;
}
