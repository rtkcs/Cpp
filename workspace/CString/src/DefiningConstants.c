/*
 * DefiningConstants.c
 *
 *  Created on: May 1, 2012
 *      Author: Robo
 */


#include <stdio.h>
#include <limits.h>		// needed for limits MIN, MAX
#define PI	3.14159F	//definition of the symbol PI as contant

int mainX(void){

	const float g = 9.81F;	// defining g as constant, it can not be changed

	float radius = 2.0F;
	float circumference = 2*PI*radius;
	float area = PI*radius*radius;

	printf("Radius = %12.2f \n", radius);
	printf("Circumference = %12.5f \n", circumference);
	printf("Area = %12.5f \n", area);

	printf("\n");
	printf("char  %d %d \n",CHAR_MIN, CHAR_MAX);
	printf("short %d %d \n",SHRT_MIN, SHRT_MAX);
	printf("int %d %d \n", INT_MIN, INT_MAX);
	printf("long %ld %ld \n",LONG_MIN, LONG_MAX);
	//printf("long long %lld %lld \n",LONG_LONG_MIN, LONG_LONG_MAX);
	//printf("%d %d",);

	return 0;
}
