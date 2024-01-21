/*
 ============================================================================
 Name        : problem8.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : Simple Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double simpleCalc(char,float,float);

int main(void) {
	float num1,num2;
	char op;

	while(1){
    printf("enter your full arithmetic operation : ");
    fflush(stdin);fflush(stdout);
    scanf("%f %c %f",&num1,&op,&num2);
    printf("Result = %lf\n",simpleCalc(op,num1,num2));

	}


	return 0;
}
double simpleCalc(char op,float n1,float n2){
	  switch(op){
	    case'+' : return (n1 + n2);
	    break;
	    case'-' : return (n1 - n2);
	  	break;
	    case'*' : return (n1 * n2);
	  	break;
	    case'/' : return (n1 / n2);
	  	break;
	    default : break;

	    }

}


