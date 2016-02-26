/*
 * Arrays.cpp
 *
 *  Created on: Feb 25, 2016
 *      Author: rtakacsux
 */

#include <iostream>

void printArray( int intArray[], int length){

	for(int i(0); i != length; i++){
		std::cout << "Element " << i << " is " <<  intArray[i] << std::endl;
	}
	std::cout << std::endl;
}

void sendOut(std::ostream & out, int * a, int arraySize){
	for(int i(0); i != arraySize; i++){
		out << "The value of element " << i << " is " << a[i] << std::endl;
	}
}

int mainArray(){


	const int arraySize(5);

	// initialize an array with 5 elements, 1st element is 2, other element are 0
	int array[arraySize] = { 2 };
	printArray(array, arraySize);

	// initialize an  array with default values, default constructor will be called
	int array2[arraySize] =  {};
	printArray(array2, arraySize);


	//int array3[];	// error: storage size of ‘array3’ isn’t known
	//printArray(array3, arraySize);


	// count the size of array
	int array4[] = {1,2};
	int const arraySize4( sizeof(array4) / sizeof(int) );
	std::cout << "arraSize4 = " << arraySize4 << std::endl;
	for(int i(0); i != arraySize4; i++){
		std::cout << "Element " << i << " is " << array4[i] << std::endl;
	}
	std::cout << std::endl;

	//pass an array to the function with pointer
	int array5[] = {11,13};
	int const arraySize5 = sizeof(array5) / sizeof(int);
	std::cout << "arraSize5 = " << arraySize5 << std::endl;
	sendOut(std::cout, array5, arraySize5);

	std::cout << "The address beyond the start of array is " << array5 << std::endl;
	std::cout << "The address beyond the end   of array is " << array5 + arraySize5 << std::endl;

	std::cout << std::endl;

}




