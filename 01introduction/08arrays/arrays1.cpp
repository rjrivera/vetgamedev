#include <iostream>
#include <string>

using namespace std;

void example() {
	int length = 5;//specify the size of my array.
	int arr[5] = { }; //initialize the array by telling the compiler the type of variable it stores, naming it, and giving it a size.

	arr[0] = 10;
	arr[1] = 5;

	for (int i = 0; i < length; i++) cout << arr[i] << endl;
	//expected output:
	/*
	10
	5
	0
	0
	0
	*/
}
/*
function: find
params: int[], int
description: traverses an array and returns the first index that holds the target value.
	Returns -1 if the value is not found.
TODO[ ] complete this function.
*/
int find(int arr[], int length, int target) {

	//for loop which iterates over all indices of an array, provided the length given is valid. 
	for (int i = 0; i < length; i++) {

	}

	return -1;
}

int main() {
	// run the example function to demonstrate example code from README to student.
	example();
	cout << endl;
	// Provide an initial test for the 'find' function.
	int arr[4] = { };
	int length = 4;
	arr[0] = 3;
	arr[1] = 5;
	arr[2] = 5;
	arr[3] = 23;
	//call the find function and store the answer into the variable 'ans'
	int ans = find(arr, length, 5);

	cout << "Searching first test array for value 5" << endl;
	cout << "value 5 found at index: " << ans << endl; //I expect to see 1 printed to console. 

	//TODO[ ] implement your own second test, write what you expect to see printed to console.
	// feel free to copy paste the code above to use as a template. 
 	// remember, since length is already used, you don't need to reinitialize it, you can just redefine it <  length = 6;  >
	// however, you can't resize an array, so if you want a different sized one, you need a new array, and thus a different named array. 


	return 1;
}
