RECAPS:

[x] Gained exposure to various details of most commonly used operators. 

FLOWCONTROL

Up til now, the flow of the program has been straightforward and rather human readable (top down), however there have already been instances where some
simple flow control could have saved on lines of code (loc) and improved on readability. This lesson will be a little more involved. We will introduce:


- for-loops

- if statements


The for-loop

The basic for-loop syntax is as follows:

for (int i = 0; i < 10; i++) {
	//do stuff
}

There are three components, the control variable initialization, the condition to iterate in the for-loop, and the manner of modifiction of the control variable
Let's walk through this example - 
the control variable is defined as an int type named 'i' initialized with the value of zero. 
if the value of 'i' is less than 10, iterate through the code in the for-loop
at the conclusion of one iteration, increment the value by one(ie, if i was 0, it increments to 1).

you can define the parameters of the for-loop however you desire.
Important note: scoping
the idea of scoping has yet to be introduced, consider this your introduction.

Up til now, any variable declared is available henceforth until the termination of the program. 
what if we wrote this?
for (int i = 0; i < 10; i++) {
	cout << i << endl;
}
cout << i << endl;

Would this compile?

The code will not compile (at least it SHOULDN'T) as the i control variable is the for-loop control variable, and is only available in the for-loop.

For now, that's enough of an intro to for-loops, the code will further flesh it out for you.

if/else statements

much like the second term of the for-loop syntax, the if clause evaluates a given expression, and if it resolves to true it proceeds to iterate the code within
it's flow exactly once. the accompanying else statement does the same, except when the if statement evaluates to false. This is not necessary tho.

if(5 < 10) {
cout <<"5 is less than 10\n";
}
else {
cout << "5 is not less than 10\n"
}

alright, enough reading, lets look at some code. 



[ ] review and complete control1.cpp 
[ ] review and complete control2.cpp


