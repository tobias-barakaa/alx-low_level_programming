#include <stdio.h>

int main(void)
{
    const char* str = "\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick";
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    return 0;
}
