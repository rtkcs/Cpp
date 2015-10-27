/*
 * NestedClasses.cpp
 *
 *  Created on: Jun 17, 2013
 *      Author: Robo
 */
#include <iostream>
using namespace std;

class OuterClass{

public:
	class InnerClass1{

		int i;
	public:
		//InnerClass1();
		int var() const{
			return i;
		}
	};//class InnerClass1

private:
	class InnerClass2{
		int i;

	public:
		InnerClass2();
		int var() const{
			return i;
		}
	};//class InnerClass2


};//class OuterClass

int main(){
	OuterClass oc;
	OuterClass::InnerClass1 ic1;
	cout <<" InnerClass1.var() = " << ic1.var();

	//OuterClass::InnerClass2 ic2;  // error InnerClass2 is private, can not access
	// ic2.var();

	return 0;
}

