
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}

double *findRootQuadraticEquation(double a, double b, double c){
    double *roots = malloc(2*sizeof(int));
    roots[0] = NAN;
    roots[1] = NAN;

    if (a == 0){
        return roots;
    } else {
    
    	double D;
   	D = b * b - 4 * a * c;
    	if (D >= 0){
        	roots[0] = (-b - sqrt(D)) / (2*a);
        	roots[1] = (-b + sqrt(D)) / (2*a);
    	} 
    	printf("x1 = %lf, x2 = %lf \n", roots[0], roots[1]);
    }
    return roots;
}