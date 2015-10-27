/*
 ============================================================================
 Name        : CFirst.c
 Author      : rtakacs
 Version     :
 Copyright   : My copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Program 5.5 Using the & operator */

int mainnnnnn1(void) {

	/* declare some integer variables */
	long a = 1L;
	long b = 2L;
	long c = 3L;

	/* declare some floating-point variables */
	double d = 4.0;
	double e = 5.0;
	double f = 6.0;

	printf("A variable of type long occupies %d bytes.", sizeof(long));
	printf("\nHere are the addresses of some variables of type long:");
	printf("\nThe address of a is: %p \nThe address of b is: %p", &a, &b);
	printf("\nThe address of c is: %p", &c);

	printf("\n\nA variable of type double occupies %d bytes.", sizeof(double));
	printf("\nHere are the addresses of some variables of type double:");
	printf("\nThe address of d is: %p \nThe address of e is: %p", &d, &e);
	printf("\nThe address of f is: %p\n", &f);
	printf("\n");

	//arrays and their addresses
	int data[5];
	int i;
	printf("A variable of type int occupies %d bytes", sizeof(int));
	for (i = 0; i < 5; i++) {
		data[i] = 12 * (i + 1);
		printf("\ndata[%d] Address: %p Contents: %d", i, &data[i], data[i]);
	}
	printf("\ndata[%d] Address: %p Contents: %d", 6, &data[6], data[6]);

	int arraySize = sizeof(data)/sizeof(data[0]);
	printf("\nSize of data is %d, number of elements %d", sizeof(data), arraySize);

	return EXIT_SUCCESS;
}
