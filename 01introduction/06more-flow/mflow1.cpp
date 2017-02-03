#include <iostream> 
#include <string>


using namespace std;	

void swap(bool& a, bool& b) {
	//store the original states
	bool tA = a;
	bool tB = b;
	// ===================implement your code here. 
	// hint - variables 'a' and 'b' are the only variables that persist through the code
	// tA and tB are locally scoped variables. 


	// ====================
	if ((a && b) || (tA && a) || (tB && b)) {
		cout << "ERROR: swap funciton incorrect" << endl;
		a = tA;
		b = tB;
	}

};

int main() {

	//TODO[ ] print the alphabet in reverse order. 

	

	cout << endl;
	//TODO[ ] print all numbers divisible by 3 from 1 - 100. if it's not divisible by 3, but divisible by 5 print the number as well. 
	// sanity check, 1-10 should print [3, 5, 6, 9, 10 ... ]
	

	cout << endl;

	// =============================================
	//!!!BONUS LESSON!!! Boolean operators!!!!!
	// && is a logical 'and' - || is a logical 'or' - '!' is a logical 'not'
	// they follow boolean algebra rules - if you don't know boolean algebra, give the wiki a read, it's a simple concept. 
	// boolean operators allow you to chain together multiple signals.
	// =============================================
	
	// TODO[ ] A static function is written at the top of the file (What's a 'static function'? Don't worry about it!:])
	// implement the function such that it switches the boolean values or "swaps" their values.
	// testcase: asis, the code indicates an entity is turning right and moving forward
	// if implemented correctly, it should indicate simply that the entity is moving in reverse. 
	// no errors should post. 
	bool up, down;
	bool left, right;
	up = right = true;
	left = down = false;
	swap(left, right);
	swap(up,down);
	if(up && right) cout << "right turn" << endl;
	else if (up && left) cout << "left turn" << endl;
	else cout << "reverse" << endl;
	if(up) cout << "forward" << endl;

	return 1;
}

