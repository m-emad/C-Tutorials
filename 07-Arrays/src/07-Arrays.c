/*
 ============================================================================
 Name        : 07-Arrays.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Arrays in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//1-dimensional array
	// int luckyNumbers[6];
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	//        indexes:    0  1  2   3   4   5
	luckyNumbers[0] = 90;
	printf("%d \n", luckyNumbers[0]);
	printf("%d \n", luckyNumbers[1]);


	//2-dimensional array
	// int  numberGrid[2][3];
	int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
	numberGrid[0][1] = 99;

	printf("%d\t %d\t %d\t \n", numberGrid[0][0],numberGrid[0][1],numberGrid[0][2]);
	printf("%d\t %d\t %d\t  \n", numberGrid[1][0],numberGrid[1][1],numberGrid[1][2]);

	return EXIT_SUCCESS;
}
