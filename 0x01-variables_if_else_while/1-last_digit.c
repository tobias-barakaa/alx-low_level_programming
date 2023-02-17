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
printf("Last digit of %d is %d and is greater than 5\n", n);
}
else if(n == 0){
printf("Last digit of %d is %d and is 0\n", n);
}
else if(n < 6){
printf("Last digit of %d is %d less than 6 and not 0\n", n);
}
else {
printf("Last digit of %d is %d and is ", n);
}
return (0);
}
