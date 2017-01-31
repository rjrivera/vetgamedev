#include <iostream> 
#include <string>


using namespace std;	

int main() {

	int a, b, c, d, e; //DYK: You can declare multiple variables in one line, but their default values are undefined. 

	a = b = c = d = e = 1; //DYK: You can define multiple variables in one line too? Right to left, the value literal '1' is passed. 

	a = a + 1;
	b += 1;
	
	c *= 2;
	d %= c;
	e = (a+5)*(c-d); //DYK: You can use the paranthesis to alter the order of operations, just like in grade school. 

	cout << "a => " << a << endl;
	cout << "b => " << b << endl;
	cout << "c => " << c << endl;
	cout << "d => " << d << endl;
	cout << "e => " << e << endl;

	//TODO[ ] alter the values and observe the changes, compile, link, and run
	return 1;
}
