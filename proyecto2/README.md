## Problem
You just made a new friend at an international puzzle conference, and you asked for a way to keep in touch. You found the following note slipped under your hotel room door the next day:

"Salutations, new friend! I have replaced every digit of my phone number with its spelled-out uppercase English representation ("ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE" for the digits 0 through 9, in that order), and then reordered all of those letters in some way to produce a string S. It's up to you to use S to figure out how many digits are in my phone number and what those digits are, but I will tell you that my phone number consists of those digits in nondecreasing order. Give me a call... if you can!"

You would to like to call your friend to tell him that this is an obnoxious way to give someone a phone number, but you need the phone number to do that! What is it?

### Input
The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with a string S of uppercase English letters.

### Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a string of digits: the phone number.

### Limits
1 ≤ T ≤ 100.
A unique answer is guaranteed to exist.
Small dataset
3 ≤ length of S ≤ 20.

Large dataset
3 ≤ length of S ≤ 2000.

### Sample

#### Input 
 
4

OZONETOWER

WEIGHFOXTOURIST

OURNEONFOE

ETHER

#### Output 

Case #1: 012

Case #2: 2468

Case #3: 114

Case #4: 3

## My Solution 
* First I would need to read the Input and tokenize the String given. This would help to read T and each test case given in the input. 
* After that, in a for loop I would pass each test case to a method called findNumber. 
* The findNumber method will receive the String containing the test case. It will iterate from 0 to 9, looking in every cycle for the corresponding number in the string containing the test case. Also, repeated numbers should be searched.
* The lookFor method is called in every iteration of the findNumber method. The lookFor method receives as an argument an int, the number to be searched and the string remaining from testcase. If a number is found in the string, the findNumber method should cut the string and pass the remaining of the string in the following iteration.
* The lookFor method iterates the string looking for the words corresponding to "ZERO", "TWO", ... , "NINE". Bool variables are used in the method.  


## My Notes 
Here are the notes I made on paper while trying to figure out a solution for this problem. In the firt page I analyzed how the examples given were solved, after that, I wrote a general idea of how I would solve the problem. In the following pages, I wrote a more detailed solution for this problem, different methods are written in pseudocode.

Link to my notes: https://goo.gl/KYuzUq 


## The code I did
For this project delivery I wrote code, this code only corresponds to what the lookFor method should do. I thought that it would take less time for me to wrote the code but the truth is that implementing just this method took way longer than I expected but I am happy with the results I achieved because I was able to work with C. 

Pending is looking for repeated numbers and slicing the string every time a number is found. I think that having this I could easily complete the problem in C. 

I think that the main challenge for me to solve this problem is my ability to work with C. I think that I could have written the code much faster for this on Java but I decided to stick with C this time because it is the programming language for the class and I wanted to take this as a personal challenge. 

My code is in the GetPhoneNumber.c file and it contains code for the lookFor method that is tested on the Main method. 