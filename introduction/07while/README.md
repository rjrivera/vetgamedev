RECAPS:

[x] Gained further exposure to for and if/else loops - learned more detail. 

# While Loops

## Intro

The while loop is a control mechanism that executes a section of code when a provided boolean expression evaluates to true;
technically you can make a while loop run in perpetuity-what if you just hard-coded a literal true into the while loop?
The trick is understanding what the problem set requires and how you leverage that to determine program execution. 

for instance, in a for loop, you tend to have a good idea about how many iterations are needed to count to ten. However, more nuanced conditions may arise. 

```cpp
//I want to quit when I find the first numbr divisibla by ten and two.
int i = 32;
bool div = false
if(32%10 == 0 && 2%10 == 0) div = true;
while(div){
	if(32%10 == 0 && 2%10 == 0) div = true;
	else i++;
}
cout << i << " is divisible by ten and two\n";
```

cool right? 

## Usage

When should you use a while loop versus a for-loop? good question! It depends. Really it's a matter of style and preference (as well as how you think)
I find myself using while loops when dealing with nuanced conditions that are variable, like traversing through a graph. Usually such exercises update
the variables that are control variables, and then is when I use while, for the most part. if the number of iterations is pretty easy to calculate or infer,
you can just go ahead and use a for loop. 

moving on to something slightly different.

#nested loops

As the name implies, nested loops are loops within loops [yo-dawg]
you have already dealt with nested control statements when you wrote if-statements inside a for-loop. 

let's look at a simple example -

```cpp
//A caesar cypher is an offset from an original alphabet to a cypher alphabet
// when the cypher is set to 1, a => b, b=> c etc. etc.
//for the letters a - f, write the cypher alphabets for offsets of 1 through 5 

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
```

Hopefully that code didn't intimidate you, don't worry, I provided it in the first .cpp file for this section. 
The comments should explain whats happening, but an important lession to take from this - 
<b>scoping of a variable can only go 'lower', not 'higher'</b>
not the lower nested for loop has access to i, but the upper loop does not have access to ltr. 

BottomLine: nested for-loops are a thing, and a uefule thing when you start to encounter rather demanding requests, as seen above

Nesting is usually expected to be 2, maybe 3 levels deep, but anything deeper and you are starting to write badly styled code.
Good object oriented programing will take care of that for you. 

[ ] while1.cpp

[ ] while2.cpp
