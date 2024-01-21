============================================================================
 Name        : arrays&strings assignment problem6.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : frequency of char in a given string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char arr[1000],target;
int freq = 0;
printf("Enter a string: ");
fflush(stdout);
gets(arr);
fflush(stdin);
printf("Enter character to find freq: ");
fflush(stdout);
scanf("%c",&target);
fflush(stdin);
for(int i=0 ; arr[i] != '\o' ;i++){

	if (arr[i] == target){
	freq+=1;
	}

}
printf("frequency of %c is %d",target,freq);
fflush(stdout);

	return 0;
}
