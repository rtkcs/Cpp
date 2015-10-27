//============================================================================
// Name        : CppFundamentalsClasses.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description : CRectangle class
//============================================================================

#include <iostream>

using namespace std;

class CRectangle{ 						//class definition

	int x, y;
	public:								// public methods definitions
		void set_values(int,int);
		int area(void);

	int main() {
		cout << "CppClasses" << endl; // prints CppClasses
		return 0;
	}

} rect;

