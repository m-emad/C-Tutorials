/*
 ============================================================================
 Name        : 10-Loops.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Loops in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Prints from 1 to 5
	int index = 1;
	while (index <= 5) {
		printf("%d \n", index);
		index++;
	}

	//Prints from 1 to 5
	index = 1;
	do {
		printf("%d \n", index);
		index++;
	} while (index <= 5);

	//Prints from 0 to 255
	for (short i = 0; i < 256; i++) {
		printf("%d \n", i);
	}

	return EXIT_SUCCESS;
}
