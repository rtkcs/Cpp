/*
 * Character.c
 *
 *  Created on: May 3, 2012
 *      Author: Robo
 */
#include <stdio.h>
#include <stddef.h>

int main(void){

	char c = 'a';
	c = c + 3; // c = 'd'
	printf("character: %c \n",c);
	printf("integer: %d \n",c);
	printf("hexadecimal: %x \n",c);

	char read = 0;
	scanf("%c", &read);
	printf("Char read from keyboard: %c \n", read);

	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'z';

	char r1 = c1 + 1;
	char r2 = c2 - 1;
	char r3 = c3 + 1;

	printf("The characters are: %-5c %-5c %-5c \n", r1, r2, r3);
	printf("The numeric values are: %-5d %-5d %-5d \n", r1, r2, r3);


	//wide character type, for unicode characters
	wchar_t wchar = '�';


	wchar_t wch = 0;
	scanf("%lc", &wch);
	printf("You entered %lc\n", wch);


	return 0;
}
