#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void) {
// This function prints the lowercase alphabet followed by a new line
char c = 'a';
while(c <= 'z') {
putchar(c);
c++;
}
putchar('\n');
return 0;
}
