/*
 * Enumeration.c
 *
 *  Created on: May 4, 2012
 *      Author: Robo
 */
#include <stdio.h>
//enum je typ int, inicializácia od 0, Monday = 0
enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

//definícia enumu, definícia + inicializácia myDog, definácia anotherDog
enum Dog {Sheppard, Coolia, Foxterier} myDog = Foxterier, anotherDog;
// definícia enumu, inicializácia mySize + zvıšenie o 1
enum Size {Small=1, Midle, Large} mySize = Small + 1;

enum Color { Red=10, Green=50, Blue=80};

//unnamed enumeration type
enum  {Mettalica, DavidGuetta } myMusic = DavidGuetta;

int main22(void){

	enum Weekday w = Wednesday;

	printf("%d \n", w);
	printf("%c \n", w);
	//nie je moné vypísa meno enumu priamo, treba na to doprogramova logiku


	return 0;
}

