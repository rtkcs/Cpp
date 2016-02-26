//============================================================================
// Name        : Pointers.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main1() {

	int i(0);
	int * ptr_i(&i);
	int const * ptr_ic(&i); //pointer only for reading
	cout << "The address or i is "<< ptr_i << endl;
	cout << "The value of the addressed instance is " << *ptr_i << endl;
	cout << "The value of the addressed instance is " << *ptr_ic << endl;
	cout << "--------------------------------------------------------------" << endl;

	//-------------------- const varianble (read only), const pointer (read only)
	// i_const can not be changed
	int const i_const(0);
	// pointer needs to be marked const, does not change value, only for reading
	int const * ptr_i_const(&i_const);
	cout << "The address or i is "<< ptr_i_const << endl;
	cout << "The value of the addresses instance is " << *ptr_i_const << endl;
	cout << "--------------------------------------------------------------" << endl;

	//----------------------------------------
	//
	int x(0);
	int y(1);
	//int * x_ptr(&x);
	//int * const x_ptr(&x);	//will not compile, error: assignment of read-only variable ‘x_ptr’
	int const * ptr_x(&x);		//pointer only for reading
	cout << "The address of x is " << ptr_x << endl;
	std::cout << "The value of the addressed instance is " << *ptr_x << endl;

	ptr_x = &y;

	std::cout << "The address of x is " << ptr_x << endl;
	std::cout << "The value of the addressed instance is " << *ptr_x << endl;
	cout << "--------------------------------------------------------------" << endl;



	//----------------------------------------
	//
	int u(0);
	int * ptr_u(&u);
	//int const * ptr_u(&u);	//will not compile, error: assignment of read-only location ‘* ptr_u’; 1
	//int * const ptr_u(&u);
	std::cout << "The address of u is " << ptr_u << endl;
	std::cout << "The value of the addressed instance is " << *ptr_u << endl;

	*ptr_u = 2;
	//u = 2;	// 1

	std::cout << "The value of the addressed instance is " << *ptr_u << endl;
	cout << "--------------------------------------------------------------" << endl;


	//---------------------------------------- char
	//
	char c('X');
	char * ptr_c(&c);
	std::cout << "The address of c is " << static_cast<void*>(ptr_c) << endl;
	std::cout << "The value of the addressed instance is " << *ptr_c << endl;



	return 0;
}
