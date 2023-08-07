/*
 ============================================================================
 Name        : problem3.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : program to find max among 3 numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float MaxOf3(float *);

int main(void) {
	float data[3],result;
	while(1){
		int i;
	for(i=0;i<3;i++){
		printf("\n[%d]Enter any Number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&data[i]);
	}

	result = MaxOf3(data);
	printf("\nMax Number is %f\n",result);

}

	return 0;
}

float MaxOf3(float *data){
float max = *data;
if(*++data > max) max=*++data;
if(*++data > max) max=*++data;
	    return max;
}
