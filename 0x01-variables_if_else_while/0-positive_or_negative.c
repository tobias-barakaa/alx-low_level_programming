#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n > 0) {
        printf("%d isPositive 10\n" n);
    }
    else if(n == 0) {
        printf("%d isNegative\n" n);
    }
    else if(n < 0) {
     printf("%d isZero\n" n);
    }
	
	return (0);
}
