/*
 ============================================================================
 Name        : arrays&strings assignment problem5.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : Search for element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void vFilling1dArray(int,int *);
void vPrint1dArray(int,int*);

void vLinear_Array_Search(int,int,int*);

int main(void) {
int size,target,location;
printf("enter no of elements : ");
fflush(stdout);
scanf("%d",&size);
fflush(stdin);
int arr[size];

vFilling1dArray(size,arr);
vPrint1dArray(size,arr);

printf("\nEnter element to search for: ");
fflush(stdout);
scanf("%d",&target);
fflush(stdin);

vLinear_Array_Search(target,size,arr);

	return 0;
}
void vFilling1dArray(int size,int *arr){
	printf("enter all array elements");
	fflush(stdout);
	for(int i=0 ; i<size ;i++){
		scanf("%d",&arr[i]);
		fflush(stdin);
	}
}

void vPrint1dArray(int size,int* arr){
	printf("\n");
	fflush(stdout);
	for(int i=0 ; i<size ;i++){
			printf("%d\t",arr[i]);
			fflush(stdout);
		}
	printf("\n");
		fflush(stdout);
}
void vLinear_Array_Search(int target,int size,int* arr){
	int success=0;
	for(int i=0 ; i<size ; i++){
		if (arr[i] == target){
			printf("element found at location : %d",i+1);
			fflush(stdout);
			success=1;
			break;
		}
		else{continue;}
	}
	if(0 == success){
		printf("element not found\n");
				fflush(stdout);
	}


}