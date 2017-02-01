#include <iostream> 
#include <string>
#include <cmath> //library providing the power function [ double pow(double base, double power) ]


using namespace std;	

int main() {
	int a, b;
	bool init = true;
	if(init) {
		init = false; //toggle init to false;
		cout << "running init routine"  << endl;
		a = 10;
		b = a;
	}
	if(init) {
		cout << "Rerunning init because first routine failed" << endl;
		int a = 10;
		int b = a;
	}
	else {
		cout << "back-up init routine not initiated\n";
	}
	
	/*
		A factorial is defined as N! = N*(n-1)*(n-2)...*1
		TODO[ ] implement factorial such that a is defined as a! using the for-loop below
		remember, as is- a = b = 10  use the '*=' compound operator. 
		*/
	for(int i = b-1; i > 0; i--) {
		
	}
	cout << b << " factorial is => " << a << endl;

	//TODO[ ] implement a control scheme that prints out all numbers divisible by 2 in the range 0 - 20;
	// hint - you learned about '<' and '>' however to express boolean equality, use '==' !!!! SUPER IMPORTANT !!!
	// common novice mistake is to use '=' which is legal to the compiler, but leads to bugs. 
	//hint: 'if(10%2 == 0)' yields true because 10 divided by 2 yields a remainder of 0...10 is divisable by two. 
	

	return 1;
}
