/*
Copyright 2017 Robert Rivera
communicate to the compiler what libraries you require using the include directive.

library source files can be included locally or from the gcc's repo of premade libraries.
*/
#include <iostream> // '<..>' indicates a noon-local premade library

using namespace std;	// tells the compiler that 'henchforth' use 
			// the 'standard' namespace. namespaces are an advanced topic. 

// the main() loop is a necessity for any proper cpp project.
// it is the starting point of program execution

int main() {

	// send the string "hello world" to the output stream (cout)
	// move the cmd line to the next line (endl)
	cout << "hello world" << endl; // ';' terminates a statement in cpp


	return 1;

}
