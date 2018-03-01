#65. Valid Number

### Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before. 

#### My Restrictions 
* Numbers can be of any lenght. 
* All numbers are into de decimal system. 
* There are positive, negative, decimal and exponential numbers. 
* Decimal numbers can start both with '0' or '.' 
* There shouldn't be intermediate spaces in the given string. 

### My Solution 
* When thinking about the solution I came up with state machines that I have reviewed in my previous courses of Electronics and Computational Math. 
* I should have 'states' for managing the String given as input. There should be states for when the number starts with a sign, number, a decimal point, or an exponential function. After that, states for every case should be built. I propose a state machine as follows: 
*** INSERT IMAGE *** 
* * A state for when the number starts with e. 
* *  A state for when the number starts with sign + or -.
* *  A state for when the number starts with 0
* *  A state for when the number starts with . 
* *  A state for when the number starts with a number. 
* * Transitions corresponding to previous state, I think of ., e or numbers according to the previous state. 
* * Ending states, all with numbers. 

* If the String contains a character that makes the number unvalid, the state machine ends trowing an error. 

* If the string ends in a valid final state, the state machine ends returning that the String given is valid as a number. 

* To program this I would implement it using stacks containing the state and the transition condition but I would need more time to review it. 