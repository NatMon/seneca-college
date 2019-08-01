# Lab 1 - Intro Screen

In this workshop, you will begin your development of a text based game **"Code Quest!"**. You will concentrate on writing source code for a very basic intro screen to your game and then you will compile and run it on Matrix.

### LEARNING OUTCOMES

Upon successful completion of this workshop, you will be able to 
- use operating system utilities to edit, compile, and run programs on a variety of platforms 
- transfer source code between a local computer and a remote one

### SPECIFICATIONS

Login to your Matrix (matrix.senecac.on.ca) accounts via SSH using an SSH client like PuTTY. You will need a Matrix account before you are able to do this.

Once logged in, make a new directory for game called codeQuest and enter that directory. The commands below will accomplish this task:

```c
mkdir codeQuest
cd codeQuest
```

Now you have a place to store your source code. To begin writing source code, create a new file called "w1.c" in a text editor of your choice (such as VI or pico) and enter the following C code:

```c
//Code Quest
//By: Your name here
//w1.c

#include <stdio.h>

int main(void) 
  {
  printf("+-----------------------+\n");
  printf("|                       |\n");
  printf("|      CODE QUEST       |\n");
  printf("|                       |\n");
  printf("+-----------------------+\n");
  
  return 0;
  }
```
