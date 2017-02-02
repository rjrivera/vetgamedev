#include <iostream> 
#include <string>


using namespace std;
/*
	Program style update: the main method will now be utilized as a testbench.
	complicated functionality will be written to functions. 
*/

//A caesar cypher is an offset from an original alphabet to a cypher alphabet
// when the cypher is set to 1, a => b, b=> c etc. etc.
// only printing cyphertext for letters a through f. 

void printCypherAlpha(int a, int b) {
//temporary variable used to track the current cypherletter being processed. 
char cypherLtr;
	//calculate a version of the cypher alphabet
	for (int i = 1; i <=5; i++) {
		cout << "cypher alphabet for offset " << i << endl;
	
		//iterate through the letters a-f and calculate/print their cyphertext 
		for(char ltr = 'a'; ltr <= 'f'; ltr++) {
			cypherLtr = ltr;
			cypherLtr += i;
			cout << cypherLtr << " ";
			}
		//I no longer have access to the ltr variable since it is not scoped for use outside the for loop
		//but I can use i because it is scoped for this for-loop
		cout << endl;
	}

}

//todo


int main() {

	printCypherAlpha(1, 5);

	return 1;
}
