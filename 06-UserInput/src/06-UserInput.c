/*
 ============================================================================
 Name        : 06-UserInput.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : User Input in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char name[10];
	printf("Enter your name: ");
	fgets(name, 10, stdin); // fgets Gets Strings only
	printf("Hello %s! \n", name);

	int age;
	printf("Enter your age: ");
	scanf("%d", &age); //Takes address to the input variable
	printf("You are %d \n", age);

	char grade;
	printf("Enter your grade: ");
	scanf("%s", &grade);
	printf("You got an %c on the test \n", grade);

	double gpa;
	printf("Enter your gpa: ");
	scanf("%lf", &gpa);
	printf("Your gpa is %f \n", gpa);

	return EXIT_SUCCESS;
}
