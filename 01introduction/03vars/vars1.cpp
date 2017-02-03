/*Copyright 2017 Robert Rivera
*/
#include <iostream> 
#include <string>
//the string library is required for string data-type operations.

using namespace std;	

int main() {

	// [datatype] [identifier] [assignment operator] [literal int value] ;
	// this is an initialization and definition. 
	int var1 = 2010;

	var1 = 2012;
	//after initialization, the computer knows its type. 
	//can be redefined with int literals.

	cout << "var1 is: " << var1 << endl;

	int var2 = 2015;
	var2 = 2016;
	
	cout << "var2 is: " << var2 << endl;

	//variables of the same datatype can be used to redefine others
	var1 = var2;
	cout << "var1 is: " << var1 << endl;
	cout << "var2 is: " << var2 << endl;

	// Given the above uses of string literals, one can infer that
	// to define a string...

	string s1 = "string1";
 

	// TODO[ ] define a variable of datatype "double" and print it to the 
	// command prompt. Observe a difference from the "int" datatype?



	return 1;

}
