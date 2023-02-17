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
int digit = n % t;
if((n % digit) > n) {
printf("Last digit of %d is %d and is greater than 5\n",
n, n % digit);
}
else if((n % digit) == 0) {
printf("Last digit of %d is %d and is 0\n",
n, n % digit);
}
else if((n % digit) < 6) {
printf("Last digit of %d is %d and is less than 6 and not 0\n",
n, n % digit);
}
else {
printf("Last digit of %d is %d and is 0\n",
n, n % digit};
return 0;
}
