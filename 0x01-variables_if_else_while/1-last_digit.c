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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 5){
printf("%d Last digit of n is" n "and is greater than 5\n");
}
else if(n == 0){
printf("%d Last digit of n is" n " and is 0\n");
}
else if(n < 6){
printf("%d Last digit of n is" n "and is less than 6 and not 0\n");
}
return (0);
}
