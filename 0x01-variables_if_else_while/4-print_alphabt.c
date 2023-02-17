#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return 0;
}
}	
