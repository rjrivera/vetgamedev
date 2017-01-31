#include <iostream> 
#include <string>
#include <cmath> //library providing the power function [ double pow(double base, double power) ]


using namespace std;	

int main() {
	//TODO[ ] design and implement the Circumference and Area formula for a Circle given a radius. 
	double rad = 2.5; //radius of a circle. 
	double radSquared = pow(rad, 2); 
	//TODO[ ] output the calculated values alongside the radius used. 
	cout << rad << " => " << radSquared << endl;


	return 1;
}
