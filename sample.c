/*
 * sample.c
 * A simple C program to demonstrate printing messages to standard output.
 * This program is used as part of a playground for Git and code experiments.
 */

#include <stdio.h>

/*
 * PUBLIC_INTERFACE
 * main - Entry point of the program
 * @ac: Argument count (number of command-line arguments)
 * @av: Argument vector (array of command-line arguments)
 *
 * Returns: 0 on successful execution
 */
int main (int ac, char *av[])
{
    // Print a greeting message to the terminal
    printf("Hello world Hello Git Hello Github\n");

    // Print a message indicating this line was added via a code maintenance prompt
    printf("added this line via KAVIA code maintenance prompt to explore KAVIA AI\n");

    // Return 0 to signal successful program execution
    return 0;
}
