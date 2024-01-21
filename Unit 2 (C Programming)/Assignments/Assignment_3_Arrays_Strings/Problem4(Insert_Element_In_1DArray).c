/*
 ============================================================================
 Name        : arrays&strings assignment problem4.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : insert element in an 1D array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void vFilling1dArray(int,int *);
void vPrint1dArray(int,int*);
void vInsert_In_1dArray(int,int,int,int*);

int main(void) {
int size,inserted_element,location;
printf("enter no of elements : ");
fflush(stdout);
scanf("%d",&size);
fflush(stdin);
int arr[size];

vFilling1dArray(size,arr);
vPrint1dArray(size,arr);

printf("\nEnter element to be inserted : ");
fflush(stdout);
scanf("%d",&inserted_element);
fflush(stdin);

printf("\nEnter location : ");
fflush(stdout);
scanf("%d",&location);
fflush(stdin);

vInsert_In_1dArray(inserted_element,location,size,arr);

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

void vInsert_In_1dArray(int element,int location ,int arr_size,int* arr){
	int new_arr[arr_size +1];
	for(int c = 0 ; c<arr_size ; c++){
		new_arr[c] = arr[c];
	}

	for(int i = (arr_size+1) ; i> (location-1)  ; i--){
		new_arr[i-1] = new_arr[i-1] ^ new_arr[i] ;
		new_arr[i]   = new_arr[i-1] ^ new_arr[i] ;
		new_arr[i-1] = new_arr[i-1] ^ new_arr[i] ;

	}

	new_arr[location-1] = element;
	vPrint1dArray(arr_size+1,new_arr);

}

