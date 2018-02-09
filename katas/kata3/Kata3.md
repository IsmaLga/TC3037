#### Kata3
##### Ismael Lizárraga González

###### Kata 3: 657. Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

Input: "UD"  Output: true  
Example 2:

Input: "LL"  Output: false  

###### My Proposal of solution. 

Since we need to determine if the robot is in its starting point we need to setup a way for calculating this. My idea is that we represent the position of the robot with an integer. We let the initial position be represented by 0. When the robot moves we perform the following operations with the position. 

* If we move the robot up we add 1 to the position. 
* If we move the robot down we subsctract 1 from the position
* If we move the robot to the right we add 10 to the position. 
* If we move the robot to the left we substract 10 from the position. 

So if the robot makes a circle, the value of position should be equal to 0. We return true if positions ends up with value 0, false otherwise. 

Proof 1: <br>
Input: UD <br>
Position = 1 - 1 = 0 <br>
Return true. <br> 

Proof 2: <br>
Input: LL <br>
Position = - 10 - 10 = -20 <br>
Return false. <br> 