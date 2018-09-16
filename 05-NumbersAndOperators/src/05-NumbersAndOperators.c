/*
 ============================================================================
 Name        : 05-NumbersAndOperators.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Numbers And Operators in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	printf("%d \n", 2 * 3);       // Basic Arithmetic: +, -, /, *
	printf("%d \n", 10 % 3);      // Modulus Op. : returns remainder of 10/3
	printf("%d \n", 1 + 2 * 3);   // order of operations
	printf("%f \n", 10 / 3.0);    // int's and doubles


	int num = 10;
	num += 100;                   // +=, -=, /=, *=
	printf("%d \n",num);

	num++;
	printf("%d \n", num);

	printf("%f \n", pow(2, 3));
	printf("%f \n", sqrt(144));
	printf("%f \n", round(2.7));
	return EXIT_SUCCESS;
}
