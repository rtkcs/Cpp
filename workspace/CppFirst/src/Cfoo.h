/*
 * Cfoo.h
 *
 *  Created on: 20.11.2011
 *      Author: Robo
 */

#ifndef CFOO_H_
#define CFOO_H_

class Cfoo {
public:
	Cfoo();				//default constructor
	Cfoo(Cfoo& cfoo);	//copy constructor
	virtual ~Cfoo();	//destructor
	int i;
	char a;
};

#endif /* CFOO_H_ */
