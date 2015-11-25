/*
 * quadratic.h
 *
 *  Created on: Nov 25, 2015
 *      Author: rtakacsux
 */

#ifndef QUADRATIC_H_
#define QUADRATIC_H_


class quadratic{

public:
	quadratic(int a, int b, int c);
	double operator()(double x)const;


private:
	int a_, b_, c_;

};

void draw_graph(double lower, double upper, double interval, quadratic const & f);

void  plot(double x, double y);

#endif /* QUADRATIC_H_ */
