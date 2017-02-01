RECAPS:

[x] Gained exposure to for and if/else loops

FLOWCONTROL part deux

There is more functionality to these loops; this is just an introduction. THere is a number of ways you can vary these initial control loops. Rather than go down the list, I'm going to just walk through a few more examples while covering a few concepts. 

Firstly, any data type can be used as a control variable. Let's consider an example with the 'char' datatype.
Now a char is a single byte of data. 0x00 - 0xFF the alphabet is 0x41-0x7A [A,B,C....x,y,z] the computer just looks at the literal byte value of a char.
Humans don't memorize the ASCII table tho - unless you work at google - so we use char literals. Let's use char literals to control a for statement. 

//Print the alphabet!

for (char let = 'a'; let <= 'z'; let++) cout << let << " " << endl; //single statement control loops don't need brackets :3

Makes sense now that we understand how the compiler interprets a different datatype. 
what about the 'string' data type? Similar concept. "ant" < "bat" < "batman" 
The concept of ordered values is known as lexicography. "ant" is lexicographically less than "bat";

This is important to understand because when you begin reading about sorting, sorting is done lexicographically. 

## if-statements revisited

what happens when we throw together a large volume of if-statements?

if(true){

	cout << "New Hope" << endl;

} 

else cout << "Phantom Menace" << endl;

if(false) cout <<"Attack of the CLones" << endl;

if(true) cout << "Empire" << endl;

if(false) cout << "RotS" << endl;

else cout << "RotJ" << endl;

The compiler is smart - very smart - made by very smart people.
It is designed to allow human readable code.
As such, the collection of if/else statements chained together may seem confusing, but if you walk through it, it becomes apparennt it prints out the original trilogy. 
Bottomline: Not every if-statement requires and accompanying else statement. 

However, what if we want to group multiple conditions along the same 'logic train'? There is a mechanism called the else-if statement. Lets look at it in action:

if(false) cout << "1" << endl;

else if(true) cout <<"2" << endl;

else cout << "3" << ednl;


Alright - lets look at some code:

[ ] mflow1.cpp
[ ] mflow2.cpp






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


