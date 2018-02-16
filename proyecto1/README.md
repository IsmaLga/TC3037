# First Midterm Project 
## Ismael Lizárraga González - A01630333
## TC3037 - Advanced Programming 

### **1120. Sum of sequential numbers** 
There is no involute formulation concerning factitiously activity of SKB Kontur in this problem. Moreover, there is no formulation at all. <br>
##### _Input_ 
There is the only number N, 1 ≤ N ≤ 10^9. <br>
##### _Output_ 
Your program is to output two positive integers A and P separated with a space such that:
N = A + (A + 1) + … + (A + P − 1). <br>
You are to choose a pair with the maximal possible value of P. <br>

| Input        | Output          
| ------------- |:-------------:| 
| 14      | A= 2 , P = 4 | 

### **Solution**

#### **First step: Understand how the input is processed.**
First I tried to understand how is that numbers are processed in this problem. For this, I made an analysis of the input N using the formula and then obtaning A and P. <br>

For input N = 14 we have that... <br>
14 = 2 + (2 + 1) + (2 + 2) + ( 2 + 3 ) = 2 + 3 + 4 + 5 = 14.  <br>
We can observe that 14 is calculated with the sum of 4 products and since 3 = P - 1, we get that P = 4 and A = 2. <br>


For input N = 15 we have that... <br>
15 = 1 + (1 + 1) + (1 + 2) + (1 + 3) + (1 + 4) = 1 + 2 + 3 + 4 + 5 = 15 <br>
We can observe that 15 is calculated with the sum of 5 products and since 4 = P - 1, we get that P = 5 and A = 1. 

For input N = 35 we have that... <br>
35 = 2 + (2 + 1) + (2 + 2) + (2 + 3) + (2 + 4) + (2 + 5) + (2 + 6) = 2 + 3 + 4 + 5 + 6 + 7 + 8 = 35. <br>
We can observe that 35 is calculate with the sum of 7 products and since 6 = P - 1, we get that P = 7 and A = 2.

We can assume that P is a variable that determines the number of factors that form the sum to get the result N. 

#### **Second step: Try to figure out a formula to solve the problem**
N = A + (A + 1) + ... + (A + P - 1) <br>

We can observe that A is added to N as much times as the formula is prolonged. And taking in consideration that P determines the number of factors that sum N we can say that A is repeated P times. Refactoring and substituting the sum of all As in the formula with P * A, we get: <br>

N = P * A + ( 1 + ... + P - 1)

For the other part of the formula we observe that they are a sum of sequential numbers that starts with 1 and ends at P - 1. From our past courses of mathematics we remember that the sum of sequential numbers is given by Σ = n(n+1) / 2. Substituying n with P-1, we get Σ = (P-1)(P-1+1)/2 = (P-1)(P)/2. We substitute the sum of the sequential numbers with (P-1)(P)/2 into our formula.

N = P * A + (P-1)(P)/2. 

We solve the equation for A:

A = (2N-(P-1)P) / 2P

We test the formula for one of our examples. Let N = 35, A = 2, P = 7. 

A = ((2*35) - (7-1)(7))/2(7) = (70 - (6)(7))/14 = (70 - 42)/14 = 28 / 14 = 2. 

With this we get sure that our formula for A is correct. 

#### **Step 3: Obtaining the solution in a program** 

Now that we have formulas for calculating N and A we try to solve our problem.

N has restriction for its values, this restriction is 1 ≤ N ≤ 10^9. To obtain both A and P, we can iterate in values for P and with that try to obtain the value A. I will do this in the following way:

while (P < N && result is not yet calculated){
    Calculate A using P and N
    Try formula for N using P a A
    
    if result is calculated, output A and P and break while;
}

In this repo is attached a file with my solution on Java. 




