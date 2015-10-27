/*
 * OperationWithString.c
 *
 *  Created on: Jan 6, 2012
 *      Author: Robo
 */


#include <stdio.h>
#include <stdlib.h>

int main4(void) {

	char str1[50] = "string one, ";
	char str2[] = "string two";
	int count1 = 0;
	int count2 = 0;

	while(str1[count1])
		count1++;

	while(str2[count2])
		count2++;

	if(sizeof(str1) < (count1+count2+1))
		printf("\nYou can not put str2 to str1.");
	else{
		//copy str2 at the end of str1
		count2 = 0;
		while(str2[count2])
			str1[count1++] = str2[count2++];

		str1[count1] = '\0'; // add a string terminator
		printf("\n%s\n", str1);
	}

	//arrays of strings

	char superBass[5][50] = {
			"Nicky Minaj - Super Bass",
			"This one is for the boys with the boomin' system",
			"Top down, AC with the coolin' system",
			"When he come up in the club, he be blazin' up",
			"Got stacks on deck like he savin' up"
	};
	int i;
	for(i=0;i<5;i++)
		printf("\n%s", superBass[i]);

	return 0;

}
