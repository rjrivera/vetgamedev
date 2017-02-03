#include <iostream>
#include <string>

using namespace std;
/*function increments provided variables by 2 and one, respectively. 
*/
void update(int& rabbit, int& tortoise) {
	if (rabbit == 9) rabbit = 1;
	else if(rabbit == 10) rabbit = 2;
	else rabbit += 2;

	if (tortoise == 10) tortoise = 1;
	else tortoise++;
}

int main() {
	int a = 2;
	int b = 1;
	/*
	TODO[ ] modify the while loop statement to stop updateing the values when they are equal. 
	*/
	while (1) {
		update(a, b);
		//the compiler reads the next two lines as one statement - 
		//statement is spread to two lines to improve readability. 
		cout << "a => " << a << endl
			<< "b => " << b << endl;
	}

	//TODO [ ] count to 50 by 5 using a while-loop. 
	int c = 1;
	
	

	return 1;
}
