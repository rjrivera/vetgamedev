#include <iostream>
#include <string>

using namespace std;

int main() {
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
