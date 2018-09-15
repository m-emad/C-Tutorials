/*
 ============================================================================
 Name        : 03-CastingAndConverting.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Casting And Converting in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("3/2=%d\n", 3/2);
	float i = 3 / 2; //=1
	printf("3/2=%f\n", i);
	printf("3/2=%f\n", (float)3/2);
	printf("3/2=%0.1f\n", (float)3/2);

	return EXIT_SUCCESS;
}
