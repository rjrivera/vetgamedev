RECAPS:

[x] Gained further exposure to for and if/else loops - learned more detail. 

# While Loops

## Intro

The while loop is a control mechanism that executes a section of code when a provided boolean expression evaluates to true;
technically you can make a while loop run in perpetuity-what if you just hard-coded a literal true into the while loop?
The trick is understanding what the problem set requires and how you leverage that to determine program execution. 

for instance, in a for loop, you tend to have a good idea about how many iterations are needed to count to ten. However, more nuanced conditions may arise. 

'''c_cpp
//I want to quit when I find the first numbr divisibla by ten and two.
int i = 32;
bool div = false
if(32%10 == 0 && 2%10 == 0) div = true;
while(div){
	if(32%10 && 2%10 == 0) div = true;
	else i++;
}

cout << i << " is divisible by ten and two\n";
'''


