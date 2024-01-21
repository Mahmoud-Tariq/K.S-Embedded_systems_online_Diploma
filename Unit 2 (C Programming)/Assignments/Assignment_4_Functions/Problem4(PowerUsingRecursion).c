/*
 ============================================================================
 Name        : Functions assignment problem4.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : power using recursion ***
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
double power(double , int );

int main() {
    double base;
    int pwr;

    printf("Enter base: ");
    fflush(stdout);
    scanf("%lf", &base);
    fflush(stdin);
    printf("Enter power: ");
    fflush(stdout);
    scanf("%d", &pwr);
    fflush(stdin);

    double result = power(base, pwr);

    printf("%.2lf^%d = %.2lf\n", base, pwr, result);

    return 0;
}

double power(double base, int pwr) {
    if (pwr == 0) {
        return 1;
    }
    else if (pwr > 0) {
        return base * power(base, pwr- 1);
    }
    else {
        return 1.0 / (base * power(base, -pwr - 1));
    }
}
