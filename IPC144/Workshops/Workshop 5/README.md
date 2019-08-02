# Lab 5 - Overworld

In this workshop, we will continue our development of a text based game "Code Quest!". This workshop focuses on the use of pointers to change variables within functions.

### LEARNING OUTCOMES

Upon successful completion of this workshop, you will be able to

- use pointers to assign to variables from functions

### PART 1:

### SPECIFICATIONS

Write a program which will act as an overworld for Code Quest! It will track the number of days remaining (before the destruction of th e world) and the player's HP.

This program will require the following 3 functions:

`void rest_at_inn(float* days_remaining, int* hp_remaining, int max)`: This function takes three arguments: a float address (days remaining), an int address (HP remaining), and an int (max HP). This function refills the player's HP to its maximum value and decreases the number of days remaining by one. Print a message indicating what has been done (check output below).

`void train(float* days_remaining, int* hp_remaining, int* experience)`: This function takes three arguments: a float address (days remaining), an int address (HP remaining), and an int address (Player Experience). This function increases the player's experience by 10 but reduces HP by 2 and reduces the number of days remaining by 0.5. This function prints a message indicating what has been done (check output below).

`void battle_demon_lord(int* current_hp)`: This function takes one argument: an int address (current HP). This function simply outputs "He's too strong!" and sets the player's current HP to zero. This function will be more correctly filled in later in the semester, it will act as the final battle in the game.

Once the above three functions are implemented, write a program that displays the player's stats and days remaining followed by a menu to the user and prompts them for input. This program will track the number of days remaining (float, initialize to 8), the player's current HP (int, initialize to 10), the player's maximum HP (int, initialize to 10), and the player's experience (int, initialize to 0). The menu will allow the user to select either "1 - Rest at Inn", "2 - Train", "3 - Fight the Demon Lord", "4 - Quit Game". Based on the user's input, call the associated function passing in the recquired arguments. This program should not exit until either 4 is selected, or if days or the user's HP is less than or equal to zero. If either are zero or below output "game over" before shutting down.

The ouput of a typical run-through of your program should look like this (user's input highlighted in bold). This does not cover ll possibilities, ensure your follows all paths correctly:

<pre>
Days remaining: 8.0 HP: 10 EXP: 0

1 - Rest at Inn
2 - Train
3 - Fight the Demon Lord
4 - Quit Game

Select: <b>2</b>
You did some training!

Days remaining: 7.5 HP: 8 EXP: 10

1 - Rest at Inn
2 - Train
3 - Fight the Demon Lord
4 - Quit Game

Select: <b>2</b>
You did some training!

Days remaining: 7.0 HP: 6 EXP: 20

1 - Rest at Inn
2 - Train
3 - Fight the Demon Lord
4 - Quit Game

Select: <b>1</b>
You rested up at the inn

Days remaining: 6.0 HP: 10 EXP: 20

1 - Rest at Inn
2 - Train
3 - Fight the Demon Lord
4 - Quit Game

Select: <b>3</b>
He's too strong!

Game Over!
</pre>

Be sure to test the quit condition and the day limit condition to ensure they work as well. If your program's output exactly matches the output shown above, given the provided inputs, and meets the day and quit conditions, then your lab is complete and ready to be submitted.

### PART 2:

### BUILDING THE GAME

If you have completed all previous game labs, you may complete this section in order to merge your current lab with your previous labs.

Copy the functions (and prototypes) into your codeQuest source code file. Make a new function with the following signature:

`void battleSequence(float* days, int* curHP, int* exp, int maxHP, int str, int def, int intel, int luck)`

Move all source code 
