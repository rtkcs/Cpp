/*
 ============================================================================
 Name        : VelkePismena.c
 Author      : rtakacs
 Version     :
 Copyright   : Some Rights Reserved
  ============================================================================
 */

#include <stdio.h>

int globalnaPremenna; //globalna premenna

int main2(void) {

	int lokalnaPremennta;	//lokalna premenna

	/*
	 * in type unsigned you can not have negative value
	 * unsigned		min value=0				max value=2^n-1
	 * signed		min value=-2^(n-1)		max value=2^(n-1) - 1
	 *
	 */



	short s;			//short == signed short
	signed short ss;
	unsigned short us;

	int i;				// int == signed int
	signed int si;
	unsigned int ui; 	// is the same as unsigned;
	unsigned u;			//

	long l;				// long == signed long
	signed long sl;
	unsigned long ul;

	char c;				//min value=-128	max value=127
	unsigned char uc;	//min value=0		max value=255

	float f;
	double d;			//presnos asi na 20 desatinných miest
	long double ld;

	//boolean
	int bFalse = 0;	//FALSE
	int bTrue = 1; 	//TRUE;	int!=0 -> TRUE

	printf("\n");
	printf("sizeof(short) = %d Byte\n", sizeof(short));
	printf("sizeof(int) = %d Byte\n", sizeof(int));
	printf("sizeof(long) = %d Byte\n", sizeof(long));

	printf("\n");
	printf("sizeof(char) = %d Byte\n", sizeof(char));
	printf("\n");

	printf("sizeof(float) = %d Byte\n", sizeof(float));
	printf("sizeof(double) = %d Byte\n", sizeof(double));
	printf("sizeof(long double) = %d Byte\n", sizeof(long double));

	printf("\n");
	signed int ii = -1;
	unsigned int uii = ii;

	printf("Maximalny unsigned int = %u \n",uii );
	printf("Maximalny   signed int = %d \n",(uii/2) );


	printf("\n");
	signed short ssh = -1;
	unsigned short ussh = ii;

	printf("Maximalny unsigned short = %u \n",ussh );
	printf("Maximalny   signed short = %d \n",(ussh/2) );


	printf("\n");
	signed long slo = -1;
	unsigned long uslo = ii;

	printf("Maximalny unsigned long = %lu \n",uslo );
	printf("Maximalny   signed long = %ld \n",(uslo/2) );


 }
