/*
 * Enumeration.c
 *
 *  Created on: May 4, 2012
 *      Author: Robo
 */
#include <stdio.h>
//enum je typ int, inicializ�cia od 0, Monday = 0
enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

//defin�cia enumu, defin�cia + inicializ�cia myDog, defin�cia anotherDog
enum Dog {Sheppard, Coolia, Foxterier} myDog = Foxterier, anotherDog;
// defin�cia enumu, inicializ�cia mySize + zv��enie o 1
enum Size {Small=1, Midle, Large} mySize = Small + 1;

enum Color { Red=10, Green=50, Blue=80};

//unnamed enumeration type
enum  {Mettalica, DavidGuetta } myMusic = DavidGuetta;

int main22(void){

	enum Weekday w = Wednesday;

	printf("%d \n", w);
	printf("%c \n", w);
	//nie je mo�n� vyp�sa� meno enumu priamo, treba na to doprogramova� logiku


	return 0;
}

