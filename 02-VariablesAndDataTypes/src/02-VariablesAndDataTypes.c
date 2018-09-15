/*
 ============================================================================
 Name        : 02-VariablesAndDataTypes.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Variables and Data types in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	/*
	 Names are case-sensitive and must begin with letter or _
	 After, may include letters, numbers, _
	 Convention says
	 Start with a lower case word, then additional words are capitalised (stylized as camelCase)
	 ex. myFirstVariable

	 	Type 			Storage size 	Value range
		char 			1 byte 			-128 to 127 or 0 to 255
		unsigned char 	1 byte 			0 to 255
		signed char 	1 byte 			-128 to 127
		int 			2 or 4 bytes 	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
		unsigned int 	2 or 4 bytes 	0 to 65,535 or 0 to 4,294,967,295
		short 			2 bytes 		-32,768 to 32,767
		unsigned short 	2 bytes 		0 to 65,535
		long 			4 bytes 		-2,147,483,648 to 2,147,483,647
		unsigned long 	4 bytes 		0 to 4,294,967,295
	 */
	char testGrade = 'A';    // single 8-bit character.
	char name[] = "Mike";    // array of characters (string)

	// you can make them unsigned by adding "unsigned" prefix
	short age0 = 10;         // at least 16-bits signed integer
	int age1 = 20;   // at least 16-bits signed integer (not smaller than short)
	long age2 = 30;          // at least 32-bits signed integer
	long long age3 = 40;     // at least 64-bits signed integer
	printf("age0=%d,  age1=%d, age2=%ld, age3=%ld \n", age0, age1, age2, age3);
	printf(
			"size of short=%d,  size of int=%d, size of long=%d, size of long long=%d \n",
			sizeof(short), sizeof(int), sizeof(long), sizeof(long long));

	float gpa0 = 2.5;       // single-precision floating point
	double gpa1 = 3.5;       // double-precision floating point
	long double gpa2 = 3.5;  // extended-precision floating point

	printf("gpa0=%f,  gpa1=%lf, gpa2=%lf \n", gpa0, gpa1, gpa2);
	printf("size of float=%d,  size of double=%d, size of long double =%d\n",
			sizeof(float), sizeof(double), sizeof(long double));
	/* no data type boolean in C*/
	int isTall;             // 0 if false, non-zero if true
	isTall = 1;
	printf("isTall=%d\n", isTall);
	testGrade = 'F';

	printf("%s, your grade is %c \n", name, testGrade);
	/*
	 %c	character
	 %d	integer number (base 10)
	 %e	exponential floating-point number
	 %f	floating-point number
	 %i	integer (base 10)
	 %o	octal number (base 8)
	 %s	a string of characters
	 %u	unsigned decimal (integer) number
	 %x	number in hexadecimal (base 16)
	 %%	print a percent sign
	 \%	print a percent sign
	 */

	return EXIT_SUCCESS;
}
