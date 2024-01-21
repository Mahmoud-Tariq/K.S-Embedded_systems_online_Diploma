/*
 ============================================================================
 Name        : arrays&strings assignment problem1.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : 2*2 matrix sum
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void vguide(void);
void vFillingArray(float arr[][2], int);
void vAdd_display_arrSum(float arr1[][2] ,float arr2[][2] ,int);

int main(void) {
	float arr1[2][2], arr2[2][2];
	vguide();
	printf("enter elements of the 1st matrix\n");
	fflush(stdin);fflush(stdout);
	vFillingArray(arr1,2);
	printf("enter elements of the 2nd matrix\n");
	fflush(stdin);fflush(stdout);
	vFillingArray(arr2,2);
	vAdd_display_arrSum(arr1,arr2,2);


	return 0;
}

void vguide(void){
	printf("\t\t*******Matrix Elements*******\n\t\t\t(a11\ta12)\n\t\t\t(a21\ta22)\n\t\t*****************************\n\n\n");
	fflush(stdin);fflush(stdout);

}
void vFillingArray(float arr[][2], int arr_size){
	int i,j;
	for(i =0 ; i < arr_size ; i++){
		for(j=0 ; j<arr_size ; j++){

			printf("\nEnter a%d%d : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&arr[i][j]);
		}}

}
void vAdd_display_arrSum(float arr1[][2] ,float arr2[][2] ,int arr_size){
	int i,j;
	float result[2][2];
	printf("\nSum is : \n");
	fflush(stdin);fflush(stdout);
	for (i=0;i<arr_size;i++){
		printf("\n\t");
		fflush(stdin);fflush(stdout);
		for(j=0 ; j<arr_size;j++){
			result[i][j] = arr1[i][j] + arr2[i][j];
			printf("\t%f",result[i][j]);
			fflush(stdin);fflush(stdout);

		}
	}



}

