/*
 * CRectangle2.cpp
 *
 *  Created on: Jun 16, 2013
 *      Author: Robo
 */


#include <iostream>
using namespace std;


//declare the class
class CRectangle2 {
	int h, w; //private by default
public:
	void set_sides(int, int); //declare the method
	int area() {
		return (h * w);
	} //this is an inline funcion or method
};


//Define the CRectangle2::set_sides method
void CRectangle2::set_sides(int a, int b) {
	h = a;
	w = b;
}

/*
int main() {
	CRectangle2 rect2;
	rect2.set_sides(10, 20);
	cout << "CRectengle2::area() = " << rect2.area() << "\n";
	return 0;
}
*/
