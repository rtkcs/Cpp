/*
 * WorkingWithStrings.c
 *
 *  Created on: Jan 6, 2012
 *      Author: Robo
 */


#include <stdio.h>
#include <stdlib.h>

/* Program 5.5 Using the & operator */

int main3(void) {

	printf("This is a string.\n");
	printf("This character is used to terminate the string \0 hidden part."); // \0 means end of an array

	char saying[] = "I say this.";
	char str[100] = "I say that";// 0-9 is holding the string, 10-is holding \0, space is allocated for all 100 elements of the array

	const char message[] = "The end of the world will be in 2012"; //the array cannot be modified, it is good for standard messages
	printf("\nThe message is: %s", message);

	return 0;
}
