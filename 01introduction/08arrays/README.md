RECAPS:

[x] Gained exposure and practice with the while-loop

[x] learned the tortoise-and-hare algorithm for cycle detection. Relevant for linked list cycle detection 
	The T-H algorithm will resurface and given more detail when covering data strutures. It isn't an arbitrary exercise.  

[x] familiarity with functions to improve code readability, modularity, and testability (important principles).

[x] learned about caesar cyphers
	- [in a big4 interview, I was asked to describe what encryption was on a fundamental level, so good exposure]

# Notes on previous lesson
by now I hope that you have learned the difference between '=' and '=='.
'=' is an assignment operator and changes the value of the left-hand variable. 
'==' is a boolean operator that yields true or false depending on the operatands. Used to check for equivalancy. 

# Arrays

## Introduction
Imagine you had not a single value you cared about, but a collection of values. Rather than have an individual variable for each value (and having the pain of naming each individual variable) wouldn't it be great to bind them together into a single variable and access each one by an index? The array does just that!

When you create a variable, the computer puts aside a piece of memory at a memory address to store that value. When you name an array, you must specify the size, and you cannot resize it. The computer then goes and sets aside a chunk of memory at a memory address equal to the number of variables being stored. When you access a value, you supply the variable name and an offset value, so the computer looks up the memory address of the arry and then uses the offset to retrieve the specific value you request.

## Example

I've described an array, now let me show you an array example.

```cpp
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
```

Now that you've carefully reviewed the example line by line, lets review some subtle details. 

First detail - and be prepared to be slightly annoyed - when you declare the array, the size must be a literal, not a variable. The compiler will yell at you if you replace the '5' in arr[5] with length. pragmattically, these nuances will go away when we transition from arrays to vectors. We will cross that bridge when we get there. 

Initialization using the { } brackets initializes an array of int's to 0 for all 'slots'. if it were an array of String's, they would be initialized to "".
Therefore, it would follow that since we only outright assigned values to indices 0 and 1, the remaining array retained values of 0. 

Another note (and a source of frustration in debugging if you aren't cognizant of it), arrays are 'zero-based' which means that the first value is at index 0, not index 1. As such, the last value of a size N array is at location N-1. Computer systems are usually based on zero-based indexing. A subtle side effect is that the middle clause of the for-loop used to iterate over an array is either  i < length or i <= length-1 . That is entirely a style choice of the author. 

It is useful to utilize a seperate value to retain the length of an array, because to calculate the length from an array itself can be complicated.
Don't believe me? google "find length of array c++" 

# Conclusion

Arrays are very commonly used in interview questions, and an all-around widely utilized feature in many flavors of Object Oriented Programming. If you go into web development and find yourself playing with frontend Javascript, guess how an ajax call to the backend returns retrieved data? In the form of an array! 
Bottomline - important concept.

