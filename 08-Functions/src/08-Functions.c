/*
 ============================================================================
 Name        : 08-Functions.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Functions in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float add(float first, float second){
	return first+second;
}

int main(void) {
	float sum = add(5,7);
	printf("sum=%f", sum);
	return EXIT_SUCCESS;
}
