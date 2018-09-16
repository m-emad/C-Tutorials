/*
 ============================================================================
 Name        : 09-FlowControl.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Flow Control in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int isStudent = 0; //Remember: There is no boolean type in C, we use int=0 as false, otherwise as true
	int isSmart = 0;

	if (isStudent && isSmart) {
		printf("You are a smart student\n");
	} else if (isStudent && !isSmart) {
		printf("You are not a smart student\n");
	} else {
		printf("You are not a student and not smart\n");
	}

	// >, <, >=, <=, !=, ==
	if (1 > 3) {
		printf("number comparison was true\n");
	}

	if ('a' > 'b') {
		printf("character comparison was true\n");
	}

	char grade;
	printf("Enter Your Grade: \n");
	scanf("%c", &grade);
	switch (grade) {
	case 'A':
		printf("You Pass\n");
		break;
	case 'F':
		printf("You fail\n");
		break;
	default:
		printf("Invalid grade\n");
	}

	return EXIT_SUCCESS;
}
