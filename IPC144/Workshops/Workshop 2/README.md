# Lab 2 - Computations

In this workshop, you will continue your development of a text based game "Code Quest!". This workshop focuses on retrieving input from the user, use of different variable types and executing basic arithmetic calculations.

### LEARNING OUTCOMES

Upon successful completion of this workshop, you will be able to
- Retrieve input from the user
- Select appropriate types for your program variables
- Convert between integer and floating-point types

### PART 1:

### SPECIFICATIONS

Each player has the following float attributes: _strength_, _speed_, _defense_, _intelligence_.  
Also, each player has the following four float attribute ratio: _strengthRatio_, _speedRatio_, _defenseRatio_, _intelligenceRatio_.  
In addition, each player has an integer variable _luck_.

Write a program to 
- Prompt the user to input the player's attributes: strength, speed, defense, intelligence
- Receive input from the user for each of the above attributes
- Once all inputs are collected calculate the sum of all the attributes
- Calculate ratios for each attribute by dividing each attribute with the sum of all attributes
- Calculate the final player stats by multiplying each attribute ratio by 100 and storing it as a whole number
- Calculate the player's luck stat by finding the remainder of the sum divided by 30 (use modulus operator)
- Display to the user the finalized player stats

The output of a typical run-through of your program should look like this (user input highlighted in bold):

<pre>
Character Creation
Please enter your desired stats for your character:

Enter strength: <b>21</b>
Enter speed: <b>35</b>
Enter defense: <b>20</b>
Enter intelligence: <b>75</b>

Your player's final states are:

Strength: 13
Speed: 23
Defense: 13
Intelligence: 49
Luck: 1
</pre>

You may assume that the user enters valid numbers. If your program's output exactly matches the output shown above, given the provided inputs, then part 1 is complete and you are ready to do part 2.

### PART 2 (BONUS):

### SPECIFICATIONS

### BUILDING THE GAME

If you have completed workshop 1, you may complete this section in order to merge your current workshop with your previous workshop.

Copy the source code from this workshop (excluding the main and braces) and create and open up a "codeQuest.c" file. Paste the copied source code into the code quest source file below the intro screen component within the main. If successful, the output of the program should have the intro screen and followed by the character creation section.
