/*
 ============================================================================
 Name        : 11-Structures.c
 Author      : Zafan
 Version     :
 Copyright   : 
 Description : Structures in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[100];
	int age;
	char grade;
	float gpa;
};

struct Book {
	char title[100];
	char author[100];
	int numPages;
};

int main(void) {

	struct Book book1;
	book1.numPages = 600;
//	book1.title = "Harry Potter"; //error assignment to expression with array type
//	book1.author = "JK Rowling";  //error assignment to expression with array type
	strcpy(book1.title, "Harry Potter");
	strcpy(book1.author, "JK Rowling");

	printf("Book title: %s \n", book1.title);
	printf("Book author: %s \n", book1.author);
	printf("No. of Pages: %d \n", book1.numPages);

	struct Student student1;
	strcpy(student1.name, "Mahmoud");
	student1.age = 20;
	student1.grade = 'A';
	student1.gpa = 3.5;

	puts("\n\n");

	printf("Student Name: %s \n", student1.name);
	printf("Student Age: %d \n", student1.age);
	printf("Student Grade: %c \n", student1.grade);
	printf("Student GPA: %f \n", student1.gpa);

	return EXIT_SUCCESS;
}
