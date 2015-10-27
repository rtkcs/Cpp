/*
 * LibraryFunctions.c
 *
 *  Created on: Jan 7, 2012
 *      Author: Robo
 */

#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <stddef.h>


int mainXX(void){
	// ------------ strcpy
	char str1[] = "string destination";
	char str2[] = "string source";

	if(sizeof(str2) <= sizeof(str1))
		strcpy(str1, str2);

	printf(str1);
	printf("\n");
	printf(str2);
	printf("\n");

	// ------------ strncpy
	char destination[] = "string destination";
	char source[] = "string source";

	//if(sizeof(source) <= sizeof(destination))
		strncpy(destination, source, 13);

	printf(destination);
	printf("\n");
	printf(source);
	printf("\n");

	//------------- length
	printf("\nlength of str2 = %d",strlen(str2));

	size_t count = 0; // this if from stddef.h, for code portability
	count = strlen(str2);
	printf("\nlength of str2 = %d", count);

	// ------------ joining strings
	char str11[] = "string destination,";
	char str21[] = "string source";
	strcat(str11, str21);		// copy str2 to the end of str1
	strncat(str11, str21, 5); // append first 5 characters of str2 to str1


	// ------------ str

}
