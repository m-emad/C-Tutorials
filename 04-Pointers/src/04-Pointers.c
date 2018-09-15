/*
 ============================================================================
 Name        : 04-Pointers.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Pointers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num = 10;
	printf("%p \n", &num); //&num means Address of variable num at Memory

	int *pNum = &num; //Assign Address of variable num to the variable pNum
	printf("%p \n", pNum); //Print variable pNum (Address of variable num)
	printf("%d \n", *pNum); // (Dereferencing) Print value at Address pNum (value of variable num)
	return EXIT_SUCCESS;
}
