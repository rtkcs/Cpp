/*
 * DefiningConstants.c
 *
 *  Created on: May 1, 2012
 *      Author: Robo
 */
#include <stdio.h>


int mainNN(void){

	int i = 100;
	long big_number = 100000L;
	long long realy_big_number = 100000000000LL;

	unsigned int ui = 100U;
	unsigned long ul = 9999999UL;

	int ihexa = 0x99;
	int ihexa2 = 0X99;

	int ioctal = 014; //oktalny zapis ak je pred cislom 0
	printf("%d",ioctal); //vypise 12

	float f = 1.24F;
	double d = 1.25E10; //double
	float ff = 1.25E5F; //float


	float rope_length = 10.0F;
	float count_of_pieces = 4.0F;
	float piece_length = 0.0F;

	piece_length = rope_length / count_of_pieces;
	printf("\n\n");
	printf("A rope %f feet long can be cut into %f pieces %f feet long.\n", rope_length, count_of_pieces, piece_length);
	printf("A rope %.2f feet long can be cut into %.0f pieces %.2f feet long.\n", rope_length, count_of_pieces, piece_length);

	// controlling the output field width
	// %[width][.precision][modifier]f
	// [-width]  	---- left align
	// [width]		---- right align
	// d 			---- integer
	// f			---- float

	printf("A %8.2f rope foot can be cut into %5.0f pieces %6.2f feet long.\n", rope_length, count_of_pieces, piece_length);
	printf("A rope %8.2f feet long can be cut into %5.0f pieces %6.2f feet long.\n", rope_length, count_of_pieces, piece_length);
	// with a - is a digit left aligned
	printf("A rope %-8.2f feet long can be cut into %-5.0f pieces %-6.2f feet long.\n", rope_length, count_of_pieces, piece_length);



	scanf("%f", &rope_length);
	printf("rope length from keyboard: %f", rope_length);

	return 0;
}

