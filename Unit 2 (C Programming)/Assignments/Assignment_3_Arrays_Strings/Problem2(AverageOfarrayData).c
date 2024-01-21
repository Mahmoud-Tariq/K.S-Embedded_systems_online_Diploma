/*
 ============================================================================
 Name        : arrays&strings assignment problem2.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : average of user data using array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {
int size,i;
printf("enter number of data : ");
fflush(stdin);fflush(stdout);
scanf("%d",&size);
float arr[size],sum=0;
for(i=0; i<size; i++){
	printf("\n%d. Enter Number: ",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&arr[i]);
	sum+=arr[i];
}
printf("Average = %f",(sum/size));

	return 0;
}
