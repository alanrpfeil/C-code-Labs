#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char hello[12] = "hello ", world[6] = "world!\n", *s;
  s = strcat(hello,world);
  printf(s);
return 0;

/*
Q1.) The program initializes a char array without the use of “{ }” to assign specific elements 
within the char array. Because of this, the size of the array isn’t big enough to copy   	  “world!”to “hello” and therfore, anything after “hello ” will not show up when s is printed.
Q2.) The char array “hello” should be declared as a 12-element array (and declare world[6]?).This   number of elements will suffice for “hello world!"
Q3.) You first compile the code by running the line “g++ (or gcc) <filename>.c (-o to name exe
manually) <desiredexe>. Once you compile the code, you run it with the command "./
<desiredexe>." C doesn’t tell you that you’re out of bounds because it’s a lower-level coding 	language, which leaves you more ‘freedom’ whether it means that you’re more free to make more 	mistakes or not.
Q4.) A pro of this would be that you have more flexibility when trying to reach a desired output; we
can manually trigger certain things to happen more directly. However, a con of this is when you
have a logical error in the code that doesn't show as an error report at the end of a run. This
leaves us with less information to fix the bug.
*/
