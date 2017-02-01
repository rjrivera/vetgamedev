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

