#include <iostream>
#include <random>
#include <string>

using namespace std;

/* there can be only one! (random number generator that-is)
*/
static default_random_engine generator;
static uniform_int_distribution<int> distribution(0, 3);

/*
function: populateArray
params: array of integers, int describing the length of the passed array
description: leverages a static random number generator belonging to the project to create random numbers and
store them into the passed array. the numbers will be between 0 and 3, inclusive [0, 3]
*/
void populateArray(int arr[], int len) {
	for (int i = 0; i < len; i++) arr[i] = distribution(generator);
}

/*
function: printDirections
params: array of integers, int describing the length of the passed array
description: prints to console the strings "left" "right" "up" "down" based off the input array.
0 => "left"
1 => "right"
2 => "up"
3 => "down"
TODO[ ] implement this function. use a for-loop and if/if-else/else statements.
*/

void printDirections(int arr[], int len) {

}



int main() {
	//initialze a test arry and it's length. 
	int arr[10] = {};
	int len = 10;
	//call the populateArray function to generate and stor a random value between 0 and 3 to each slot of the array.
	populateArray(arr, len);

	//call the printDirections function, sine the input array has been created and populated. 
	printDirections(arr, len);	


	return 1;

}
