/*
 ============================================================================
 Name        : arrays&strings assignment problem3.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : transpose of a given array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void vFilling2dArray(int,int cols,float arr[][cols]);
void vtranspose(int,int cols,float arr[][cols]);
void vPrint2dArray(int,int cols,float arr[][cols]);

int main(void) {
int rows,columns;
printf("Enter Rows and columns size of the matrix : ");
fflush(stdin);fflush(stdout);
scanf("%d%d",&rows,&columns);
float arr[rows][columns];
vFilling2dArray(rows,columns,arr);
printf("\nEntered matrix is: \n");
fflush(stdin);fflush(stdout);
vPrint2dArray(rows,columns,arr);
printf("\nTranspose of matrix is: \n\n");
fflush(stdin);fflush(stdout);
vtranspose(rows,columns,arr);

	return 0;
}
void vPrint2dArray(int rows,int cols,float arr[][cols]){
	for(int i =0 ; i <rows ;i++){
		printf("\n");
		fflush(stdin);fflush(stdout);
		for(int j=0 ; j<cols ;j++){
			printf("%f\t",arr[i][j]);
			fflush(stdin);fflush(stdout);
	}


	}

}
void vFilling2dArray(int rows,int cols,float arr[][cols]){
	int i,j;
	printf("Enter elements of the matrix.\n");
		for(i =0 ; i <rows  ; i++){
			for(j=0 ; j<cols ; j++){

				printf("\nEnter element a%d%d : ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&arr[i][j]);
			}}

	}

void vtranspose(int rows,int cols,float arr[][cols]){
	float tran[cols][rows];
	for(int i =0 ; i <rows; ++i){
				for(int j=0 ; j<cols ; ++j){

					tran[j][i]=arr[i][j];
				}}

	vPrint2dArray(cols,rows,tran);


}
