#include <iostream> 
#include <string>


using namespace std;	

int main() {
	//the fibonacci sequance is defined as fib_n = fib_n-1 + fib_n-2; [1, 1, 2, 3, 5, etc.]
	//it's a fun interview question. 
	//TODO[ ] implement a simple naive solution using the below code snippet to print out the 3rd - 10th numbers [2, 3, 5, 8, ...]
	int a = 1; //hint, view a as fib_n-2
	int b = 1; //view b as fib_n-1
	int c;     //view c as fib_n

	for (int i = 3; i < 10; i++) {


		cout << "the " << i << "fib number is " << c << " ";
	}
	cout << endl;
	//TODO[ ] count down from ten
	for (   ) {
		cout << endl;
	}


	return 1;
}

