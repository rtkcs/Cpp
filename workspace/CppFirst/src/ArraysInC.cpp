/*
 * ArraysInC.cpp
 *
 *  Created on: 28.12.2011
 *      Author: Robo
 */

#include <stdio.h>

int main2() {

	int count = 5; /* Number of values to be read */
	int numbers[count]; /* Array storing 10 values */

	long sum = 0L; /* Sum of the numbers */
	float average = 0.0f; /* Average of the numbers */
	printf("\nEnter the %2d numbers:\n", count); /* Prompt for the input */

	/* Read the ten numbers to be averaged */
	for (int i = 0; i < count; i++) {
		printf("%2d> ", i + 1);
		scanf("%d", &numbers[i]); /* Read a number */
		sum += numbers[i]; /* Add it to sum */
	}

	average = (float) sum / count; /* Calculate the average */

	for (int i = 0; i < count; i++)
		printf("\nGrade Number %d was %d", i + 1, numbers[i]);

	printf("\nAverage of the %2d numbers entered is: %f\n", count, average);
	return 0;

}



