/*
 * quadratic.cpp
 *
 *  Created on: Nov 25, 2015
 *      Author: rtakacsux
 */

#include "quadratic.h"
#include <iostream>
#include <istream>

quadratic::quadratic(int a, int b, int c):a_(a), b_(b), c_(c){}

double quadratic::operator()(double x)const{
	return ( (a_*x + b_)*x + c_ );
}

void draw_graph(double lower, double upper, double interval, quadratic const & f){

	double x(lower);
	do{
		plot(x, f(x));

	} while( (x += interval) < upper );
}


void  plot(double x, double y){
	std::cout << "(" << x << ", " << y << ")\n";
}





