/*
 ============================================================================
 Name        : 01-Printing.c
 Author      : Zafan
 Version     : 0.1
 Copyright   : 
 Description : Printing in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! , used for printing strings only*/
	printf("Say \"Hello\"! \n");  // \" to add "
	printf("1+5=%d\n",1+5);
	printf("1.2+5.3=%f\n",1.2+5.3);
	printf("1.2+5.3=%f\n",(float)1.2+5.3);

	printf("A\nB\nC\n"); // \n for new line
	printf("A\tB\tC\t\n"); // \t for tabs
	printf("120 in HEX is\t%X\n", 120); //  %X for hex
	printf("AC HEX equals %10d in decimal\n",0XAC); // %10 to add 10 spaces and d for decimal
	printf("Price is \t%10.2f\n", 120.2); // %10 to add 10 spaces .2 float precision and f for floating


	return EXIT_SUCCESS;
}
