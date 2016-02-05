/* This is an example of a comment */

// You can also use this syntax
// Another line of comment with this syntax

#include <stdio.h>
/* We include the file stdio.h
 * which contains the prototype
 * of the function puts that
 * we are using in the main function
 * 0. Locate the file stdio.h on your machine
 * 1. Open it and browse it for 2 minutes
 * 2. Find the prototype of puts and try
 * to understand what every word means
 */

int main(void)
/* The function main is the entry point
 * of your program. Every full C program begins
 * there (Actually not exactly but we'll see
 * more later).
 * It should always return an integer, and
 * in this example it takes no argument.
 * We will see later that it can
 * also receive arguments.
 */

{
  puts("Hello Holberton");
  /* We call the function puts with the string
     "Hello Holberton", in order to print it.
     man puts to know more about puts.
     Note that the line ends with the char ';'
  */
  return (0);
  /* This is the end of out short program.
   * The value returned by main will indicate
   * other programs, like the shell, if
   * everything succeeded or not. By convention
   * the value 0 indicates success, and any
   * other value indicates that something
   * went wrong.
   * When you run a program with the shell,
   * you can check the return value of the
   * last program by typing "echo $?"
   */
}
