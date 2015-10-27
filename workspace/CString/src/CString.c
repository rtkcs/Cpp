/*
 ============================================================================
 Name        : CString.c
 Author      : rtakacs
 Version     :
 Copyright   : Some Rights Reserved
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main2(void) {

	char str1[] = "one two three";
	char str2[] = "four five six seven";
	int count1 = 0;
	int count2 = 0;

	while(str1[count1] != '\0')
		count1++;

	while(str2[count2]) // is the same as (str2[count2] != '\0'), \0 == false
		count2++;

	char message[] = "\nThe length of the string>>>%s<<< is %d characters";
	printf(message, str1, count1);
	printf(message, str2, count2);

	printf("\\a");
	return 0;

}
