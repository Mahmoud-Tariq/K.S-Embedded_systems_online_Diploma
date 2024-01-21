/*
 ============================================================================
 Name        : arrays&strings assignment problem8.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : reverse of string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
char arr[1000];
int len= 0;
printf("\nEnter a string: ");
fflush(stdout);
gets(arr);
fflush(stdin);
for(int i=0 ; arr[i]!= '\0' ; i++){
	len+=1;
}


for(int j=0 ; j<(len/2) ; j++){
	arr[j]       = arr[j] ^ arr[(len-1)-j];
    arr[(len-1)-j] = arr[j] ^ arr[(len-1)-j];
	arr[j]       = arr[j] ^ arr[(len-1)-j];
}

printf("\nReversed array is : %s",arr);

	}

	return 0;
}
